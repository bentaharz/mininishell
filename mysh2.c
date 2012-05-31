/*
** mysh2.c for mysh in /home/kapand_v//minishell
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Wed May 23 16:57:28 2012 victor kapandji
** Last update Thu May 31 19:10:52 2012 victor kapandji
*/

#include	"./include/my.h"

int		find_start(char *str)
{
  int		start;

  start = 0;
  while (str[start] == ' ')
    start++;
  return (start);
}

int		find_end(char *str)
{
  int		end;

  end = my_strlen(str);
  while (str[end] == ' ')
    end--;
  return (end);
}

int		cmp_com(char *str)
{
  int		i;
  int		c;

  i = 0;
  c = 0;
  while (str[i])
    {
      if (str[i] == ' ')
	{
	  i++;
	  c++;
	}
      else
	i++;
    }
  c++;
  my_printf("%d\n", c);
  return (c);
}
