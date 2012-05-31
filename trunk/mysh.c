/*
** mysh.c for mysh in /home/kapand_v//minishell
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Tue May 22 15:24:45 2012 victor kapandji
** Last update Thu May 31 20:15:07 2012 victor kapandji
*/

#include	"./include/my.h"
#include	"./include/include.h"
#include	<stdlib.h>
#include	<stdio.h>

char		*r_com(char *r_line)
{
  int		c;

  c = 0;
  while(1)
    {
      c = read(0, r_line, 8200);
      r_line[my_strlen(r_line) - 1] = '\0';
      if (c > 0 || c < 8200 || (c == 8200 && r_line[8199] == '\n'))
	return (r_line);
    }
}

int		cmp_l(char *com)
{
  int		c;
  int		b;
  int		start;
  int		end;

  b = 0;
  c = 0;
  start = find_start(com);
  end = find_end(com);
  while (start < end)
    {
      if (com[start] == ' ')
	{
	  b++;
	  while (com[start] == ' ')
	    start++;
	}
      else
	{
	  start++;
	  c++;
	}
    }
  //my_printf("Nombre de mot : %d\nNombre d'espace : %d\nNombre a malloc : %d\n", c, b, (c + b));
  return (c + b);
}

char		*epure_str(char *com)
{
  char		*to_return;
  int		start;
  int		end;
  int		i;

  start = find_start(com);
  end = find_end(com);
  i = 0;
  if ((to_return = malloc(sizeof(char) * cmp_l(com))) == NULL)
    return ("Error malloc");
  while (start < end)
    {
      if (com[start] == ' ' && i != end)
	{
	  to_return[i] = com[start];
	  while (com[start] == ' ')
	    start++;
	  i++;
	}
      else
	{
	  to_return[i] = com[start];
	  start++;
	  i++;
	}
    }
  to_return[cmp_l(com) + 1] == '\0';
  return (to_return);
}

char		**tmalloc(char *com)
{
  char		**to_return;
  int		i;
  int		y;
  int		size;

  i = 0;
  y = 0;
  size = 0;
  if ((to_return = malloc(sizeof(char*) * cmp_com(com))) == NULL)
    return NULL;
  to_return[cmp_com(com)] = NULL;
  while (com[i])
    {
      if (com[i] == ' ' || !(com[i + 1]))
	{
	  if (!(com[i + 1]))
	    size++;
	  if ((to_return[y] = malloc(sizeof(char) * (size + 1))) == NULL)
	    return NULL;
	  to_return[y][size + 1] = '\0';
	  size = 0;
	  y++;
	}
      size++;
      i++;
    }
  return (to_return);
}

char		**cut_com(char *com)
{
  char		**to_return;
  int		i;
  int		y;
  int		c;

  c = 0;
  i = 0;
  y = 0;
  to_return = tmalloc(com);
  while (com[i])
    {
      if (com[i] != ' ')
	{
	  to_return[y][c] = com[i];
	  c++;
	  i++;
	}
      else
	{
	  y++;
	  i++;
	  c = 0;
	}
    }
}

void		mysh()
{
  char          *buff;
  char		**tab_com;
  int		i;

  if ((buff = malloc(sizeof(char) * 8200)) == NULL)
    return;
  my_printf("&>");
  buff = r_com(buff);
  buff = epure_str(buff);

  my_printf("Commande : %s$\n", buff);

  tab_com = cut_com(buff);

  i = 0;
  while (tab_com[i])
    {
      my_printf("commande[%d] : %s\n", i, tab_com[i]);
      i++;
    }

}
