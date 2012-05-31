/*
** my_put_nbr.c for my_put_nbr in /home/kapand_v//Jour_03
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Thu Mar  8 11:18:22 2012 victor kapandji
** Last update Sat Apr 21 19:09:03 2012 victor kapandji
*/

#include	"my.h"

void	my_put_nbr(int nb)
{
  int	result;
  int	diviseur;

  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = -nb;
	}
      diviseur = 1;
      while ((nb / diviseur) >= 10)
	diviseur = diviseur * 10;
      while (diviseur > 0)
	{
	  result = (nb /diviseur) % 10;
	  my_putchar(48 + result);
	  diviseur = diviseur / 10;
	}
    }
}
