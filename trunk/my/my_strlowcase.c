/*
** my_strlowcase.c for my_strlowcase in /home/kapand_v//Taff/piscine/Jour_06/ex_07
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 18:10:25 2012 victor kapandji
** Last update Tue Mar 13 21:37:51 2012 victor kapandji
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 90 && str[i] >= 65)
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
