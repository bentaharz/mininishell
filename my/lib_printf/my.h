/*
** my.h for my in /home/kapand_v//Taff/piscine
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Fri Mar 16 15:03:21 2012 victor kapandji
** Last update Sun Apr 29 14:13:28 2012 victor kapandji
*/

#include	<stdarg.h>

#ifndef		MY_H
# define	MY_H

int		my_putchar(char c);
int		my_isneg(int nb);
void		my_put_nbr(int nb);
void		my_swap(int *a, int *b);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
void		my_sort_int_tab(int *tab, int size);
int		my_power_rec(int nb, int power);
int		my_square_root(int nb);
int	    	my_is_prime(int nombre);
int		my_find_prime_sup(int nb);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_revstr(char *str);
char		*my_strstr(char *str, char *to_find);
int		my_strcmp(char *s1, char *s2);
int		my_strncmp(char *s1, char *s2, int nb);
char		*my_strupcase(char *str);
char		*my_strlowcase(char *str);
char		*my_strcapitalize(char *str);
int		my_str_isalpha(char *str);
int		my_str_isnum(char *str);
int		my_str_islower(char *str);
int		my_str_isupper(char *str);
int		my_str_isprintable(char *str);
int		my_showstr(char *str);
int		my_showmem(char *str, int size);
char		*my_strcat(char *dest, char *src);
char		*my_strncat(char *dest, char *src, int nb);
int		my_strlcat(char *dest, char *src, int size);
void		my_putnbr_base(int nb, char *base);

/*
  int	unexamin(va_list list);
  int	unexamaj(va_list list);
  int	unbin(va_list list);
  int	unoctal(va_list list);
  int	str(va_list list);
  int	charput(va_list list);
  int	numout(va_list list);
  int	stroctal(va_list list);
  int	my_printf(char *format, ...);
  int	my_exapoint(va_list list);
*/

#endif
