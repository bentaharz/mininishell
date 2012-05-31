/*
** my_strupcase.c for my_strupcase in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 17:53:42 2012 victor kapandji
** Last update Tue Mar 13 18:09:30 2012 victor kapandji
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 122 && str[i] >= 97)
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
