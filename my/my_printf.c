/*
** printf.c for my_printf in /home/kapand_v//Printf
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
+
**
** Started on  Wed Apr 18 18:10:38 2012 victor kapandji
** Last update Wed May 23 12:08:15 2012 victor kapandji
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

typedef		int (*flag)(va_list);

int		str(va_list list);
int		charput(va_list list);
int		numput(va_list list);
int		stroctal(va_list list);
int		unexamin(va_list list);
int		unexamaj(va_list list);
int		unbin(va_list list);
int		unoctal(va_list list);
int		undec(va_list list);
int		exapoint(va_list list);


int		correspondance(char *format, char *flag_tab, flag *func_tab, int i, va_list ap)
{
  int		j;

  j = 0;
  while ((format[i] != flag_tab[j]) && (flag_tab[j] != '\0'))
    j++;
  if (flag_tab[j] == '\0')
    {
      my_putchar('%');
      my_putchar(format[i]);
    }
  else
    func_tab[j](ap);
  return (i);
}


char		*tab(char *tab)
{
  tab = malloc(sizeof(char) * 11);

  tab[0] = 'd';
  tab[1] = 's';
  tab[2] = 'c';
  tab[3] = 'i';
  tab[4] = 'o';
  tab[5] = 'b';
  tab[6] = 'x';
  tab[7] = 'X';
  tab[8] = 'S';
  tab[9] = 'u';
  tab[10] = 'p';
  return (tab);
}

flag		*tab_func(flag *tab_func)
{
  tab_func = malloc(sizeof(flag) * 11);

  tab_func[0] = numput;
  tab_func[1] = str;
  tab_func[2] = charput;
  tab_func[3] = numput;
  tab_func[4] = unoctal;
  tab_func[5] = unbin;
  tab_func[6] = unexamin;
  tab_func[7] = unexamaj;
  tab_func[8] = stroctal;
  tab_func[9] = undec;
  tab_func[10] = exapoint;
  return (tab_func);
}

int		my_printf(char *format, ...)
{
  va_list	ap;
  flag		*func_tab;
  char		*flag_tab;
  int		i;

  va_start(ap, format);
  func_tab = tab_func(func_tab);
  flag_tab = tab(flag_tab);
  i = 0;
  while(format[i])
    {
      if (format[i] == '%')
	{
	  i++;
	  if (format[i] == '%')
	    my_putchar('%');
	  else
	    correspondance(format, flag_tab, func_tab, i, ap);
	}
      else
	my_putchar(format[i]);
      i++;
    }
}
