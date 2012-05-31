 /*
** function.c for my_printf in /home/kapand_v//Printf
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Wed Apr 18 18:25:27 2012 victor kapandji
** Last update Wed May 23 12:09:32 2012 victor kapandji
*/

#include	<stdarg.h>
#include	"my.h"

typedef		int (*flag)(va_list);

int		str(va_list list)
{
  char		*format;

  format = va_arg(list, char *);
  my_putstr(format);
}

int		charput(va_list list)
{
  char		c;

  c = va_arg(list, int);
  my_putchar(c);
}

int		numput(va_list list)
{
  int		nb;

  nb = va_arg(list, int);
  my_put_nbr(nb);
}

int		stroctal(va_list list)
{
  char		*format;
  char		*base;
  int		i;

  format = va_arg(list, char *);
  i = 0;
  base = "01234567";
  while (format[i])
    {
      if (format[i] < 7)
	{
	  my_putstr("\\00");
	  my_putnbr_base(format[i], base);
	}
      else if ((format[i] > 7 && format[i] < 32) || format[i] >= 127)
	{
	  my_putstr("\\0");
	  my_putnbr_base(format[i], base);
	}
      else
	my_putchar(format[i]);
      i++;
    }
}

int		unexamaj(va_list list)
{
  int		nb;
  unsigned int	nb2;
  char		*base;

  nb = va_arg(list, int);
  //nb2 = va_arg(list, unsigned int);
  base = "0123456789ABCDEF";
  if (nb < 0)
    {
      my_putstr("FFFFFFFF");
      return (0);
    }
  nb2 = nb;
  my_putnbr_base(nb2, base);
}
