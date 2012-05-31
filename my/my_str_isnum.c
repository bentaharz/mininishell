/*
** my_str_isnum.c for my_str_isnum in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 21:01:13 2012 victor kapandji
** Last update Tue Mar 13 21:46:11 2012 victor kapandji
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] < '1' || str[i] > '9')
	return (0);
      i++;
    }
  return (1);
}
