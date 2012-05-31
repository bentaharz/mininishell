/*
** my_strcapitalize.c for my_strcapitalize in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Tue Mar 13 18:26:51 2012 victor kapandji
** Last update Tue Mar 13 21:44:14 2012 victor kapandji
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

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 1;
  my_strlowcase(str);
  if (str[0] >= 97 && str[0] <= 122)
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if ((str[i] >= ' ' && str[i] <= '/') || (str[i] <= '@' && str[i] >= ':'))
	if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
	  str[i + 1] = str[i + 1] - 32;
      i++;
    }
  return (str);
}
