/*
** my_putchar.c for my_putchar in /home/kapand_v//Taff/piscine
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Wed Mar 14 10:09:14 2012 victor kapandji
** Last update Wed May 23 11:16:55 2012 victor kapandji
*/

int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (1);
}
