/*
** my_getnbr.c for my_getnbr in /home/kapand_v//Jour_04
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Fri Mar  9 13:01:40 2012 victor kapandji
** Last update Thu Apr 12 20:30:25 2012 victor kapandji
*/

#include	"my.h"

int		is_neg(char *str)
{
  int		i;
  int		counter;

  i = 0;
  counter = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
	counter++;
      i++;
    }
  if (counter % 2 != 0)
    return (1);
  else
    return (0);
}

int		is_num(char l)
{
  if (l >= '0' && l <= '9')
    return (1);
  else
    return (0);
}

int		my_getnbr(char *str)
{
  int		i;
  int		nbr;

  nbr = 0;
  i = 0;
  while (is_num(str[i]) == 0)
    i++;
  while (is_num(str[i]) == 1)
    {
      nbr = ((nbr * 10) + (str[i] - 48));
      i++;
    }
  if (is_neg(str) == 1)
    nbr = -nbr;
  return (nbr);  
}

