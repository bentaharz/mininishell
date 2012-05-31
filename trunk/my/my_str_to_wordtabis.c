/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/kapand_v//Taff/piscine/lib/my
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Fri Mar 16 15:22:45 2012 victor kapandji
** Last update Sat Apr 14 17:15:59 2012 victor kapandji
*/

#include	"my.h"


int		is_alpha_num(char c)
{
  if ((c <= '9' && c >= '0') || (c <= 'z' && c >= 'a') ||
      (c <= 'Z' && c >= 'A'))
    return (1);
  else
    return (0);
}

char		*replace_char(char *str)
{
  char		*line;
  int		begin;
  int		end;
  int		i;

  i = 1;
  end = my_strlen(str);
  while(is_alpha_num(str[--end]) == 0);
  begin = -1; 
  while (is_alpha_num(str[++start]) == 0);
  line = my_strdup(str);
  line[0] = ' ';
  while (begin <= end)
    {
      if (is_alpha_num(str[start]) == 1)
	line[i++] = str[start++];
      else
	{
	  line[i++] = ' ';
	  while (is_alpha_num(str[++start]) == 0);
	}
    }
  line[i] = ' ';
  line[++i] = '\0';
  return (line);
}

int		nb_elem(char *str)
{
  int		elem;
  int		start;
  int		stop;

  elem = 0;
  start = 0;
  stop = my_strlen(str) - 1;
  while (is_alpha_num(str[start]) == 0)
    start++;
  while (is_alpha_num(str[stop]) == 0)
    stop--;
  while (start <= stop)
    {
      if (is_alpha_num(str[start]) == 0)
	{
	  elem++;
	  while (is_alpha_num(str[start]) == 0)
	    start++;
	}
      else
	start++;
    }
  return (elem);
}

char		**tab_2D(char *str)
{
  int		elem;
  int		i;
  int		counter;
  char		**tab_2D;

  i = 0;
  counter = 0;
  elem = 0;
  tab_2D = malloc(sizeof(char *) * (nb_elem(str)));
  while (str[i])
    {
      if (is_alpha_num(str[i]) == 1)
	elem++;
      else
	{
	  tab_2D[counter++] = malloc(sizeof(char) * elem);
	  elem = 0;
	}
      i++;
    }
  tab_2D[counter] = malloc(sizeof(char) * elem);
  return (tab_2D);
}

char		**my_str_to_wordtab(char *str)
{
  char		**tab;
  int		counter;
  int		i;
  int		x;
  int		y;

  i = 0;
  x = 0;
  j = 0;
  str = my_strdup(replace_char(str));
  tab = tab_2D(str);
  while (str[i])
    {
      if (is_alpha_num(str[i]) == 1)
	tab[x][y++] = str[i++];
      else
	{
	  while (is_alpha_num(str[++i]) == 0);
	  if (coutner == 1)
	    tab[x++][y++] = '\0';
	  pass = 1;
	  j = 0;
	}
    }
  tab[x] = 0;
  return (tab);
}
