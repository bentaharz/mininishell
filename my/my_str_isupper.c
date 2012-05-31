/*
** my_str_isupper.c for my_str_isupper in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 21:19:50 2012 victor kapandji
** Last update Wed Mar 14 11:44:19 2012 victor kapandji
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] > 'Z' || str[i] < 'A')
	  return (0);
      i++;
    }
  return (1);
}
