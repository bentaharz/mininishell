/*
** my_putnbr_base.c for my_printf in /home/kapand_v//Printf
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Fri Apr 20 15:57:25 2012 victor kapandji
** Last update Wed May 23 11:50:47 2012 victor kapandji
*/

#include	"../include/my.h"

void    my_putnbr_base(int nb, char *base)
{
  int   result;
  int   diviseur;
  int	size_base;

  size_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  diviseur = 1;
  while ((nb / diviseur) >= size_base)
    diviseur = diviseur * size_base;
  while (diviseur > 0)
    {
      result = (nb /diviseur) % size_base;
      my_putchar(base[result]);
      diviseur = diviseur / size_base;
    }
}

