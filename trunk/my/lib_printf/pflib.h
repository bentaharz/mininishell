/*
** pflib.h for lib_printf in /home/kapand_v//Taff/piscine/lib/lib_printf
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Thu Apr 26 15:56:41 2012 victor kapandji
** Last update Thu Apr 26 16:04:13 2012 victor kapandji
*/

#ifndef		PFLIB_H_
# define	PFLIB_H_

#include	<stdarg.h>

typedef		int (*flag)(va_list);

int		my_printf(char	*format, ...);
int		str(va_list list);
int		unexamin(va_list list);
int		unexamaj(va_list list);
int		unbin(va_list list);
int		unoctal(va_list list);
int		charput(va_list list);
int		numout(va_list list);
int		stroctal(va_list list);
int		exapoint(va_list list);


#endif
