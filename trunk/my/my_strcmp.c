/*
** my_strcmp.c for my_strcmp in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 14:34:28 2012 victor kapandji
** Last update Tue Mar 13 21:32:38 2012 victor kapandji
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
      i++;
  return (s1[i] - s2[i]);
}
