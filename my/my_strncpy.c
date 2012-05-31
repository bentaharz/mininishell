/*
** my_strncpy.c for my_strncpy in /home/kapand_v//Taff/piscine/Jour_06
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Mon Mar 12 16:55:16 2012 victor kapandji
** Last update Tue Mar 13 21:29:47 2012 victor kapandji
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
