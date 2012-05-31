/*
** my_str_isalpha.c for my_str_isalpha in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 20:22:10 2012 victor kapandji
** Last update Tue Mar 13 21:00:14 2012 victor kapandji
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if ((str[i] > 'Z' || str[i] < 'A') && (str[i] > 'z' || str[i] < 'a'))
	return (0);
      i++;
    }
  return (1);
}
