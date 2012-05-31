/*
** my_strlen.c for my_strlen in /home/kapand_v//Jour_04
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Fri Mar  9 10:12:28 2012 victor kapandji
** Last update Sat Apr 28 12:33:43 2012 victor kapandji
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
