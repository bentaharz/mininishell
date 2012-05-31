/*
** my_revstr.c for my_revstr in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Mon Mar 12 19:36:09 2012 victor kapandji
** Last update Wed Mar 14 09:03:22 2012 victor kapandji
*/

char	*my_revstr(char *str)
{
  int	i;
  int	c;
  int	t;

  i = 0;
  c = 0;
  t = 0;
  while (str[c] != '\0')
    c++;
  c--;
  while (i < c)
    {
      t = str[i];
      str[i] = str[c];
      str[c] = t;
      i++;
      c--;
    }
  return (str);
}
