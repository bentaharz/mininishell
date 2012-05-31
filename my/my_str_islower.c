/*
** my_str_islower.c for my_str_islower in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 21:11:20 2012 victor kapandji
** Last update Tue Mar 13 21:31:32 2012 victor kapandji
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] > 'z' || str[i] < 'a')
	return (0);
      i++;
    }
  return (1);
}
