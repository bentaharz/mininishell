/*
** my_putstr.c for my_putstr in /home/kapand_v//Jour_04
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Thu Mar  8 20:18:41 2012 victor kapandji
** Last update Fri Apr 20 18:57:30 2012 victor kapandji
*/

int	my_putstr(char *str)
{
  char	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
