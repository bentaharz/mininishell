/*
** function_2.c for my_printf in /home/kapand_v//Printf
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Fri Apr 20 16:17:02 2012 victor kapandji
** Last update Wed May 23 12:08:48 2012 victor kapandji
*/

#include	"my.h"
#include	<stdarg.h>

typedef		int (*flag)(va_list);

int		unexamin(va_list list)
{
  unsigned int	nb;
  int		nb2;
  char		*base;

  nb2 = va_arg(list, int);
  base = "0123456789abcdef";
  if (nb2 < 0)
    {
      my_putstr("ffffffff");
      return (0);
    }
  nb = nb2;
  my_putnbr_base(nb, base);
}

int		unbin(va_list list)
{
  unsigned int	nb;
  char		*base;

  nb = va_arg(list, unsigned int);
  base = "01";
  my_putnbr_base(nb, base);
}

int		unoctal(va_list list)
{
  unsigned int	nb;
  char		*base;

  nb = va_arg(list, unsigned int);
  base = "01234567";
  my_putnbr_base(nb, base);
}

int		undec(va_list list)
{
  unsigned int	nb;
  char		*base;

  nb = va_arg(list, unsigned int);
  my_put_nbr(nb);
}

int		exapoint(va_list list)
{
  void		*format;
  char		*base;

  base = "0123456789abcdef";
  format = va_arg(list, void *);
  my_putstr("0x");
  my_putnbr_base(format, base);
}
