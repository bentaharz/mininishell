/*
** my_isneg.c for my_isneg in /home/kapand_v//Jour_03
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Wed Mar  7 10:46:19 2012 victor kapandji
** Last update Thu Mar  8 19:56:17 2012 victor kapandji
*/

int	my_isneg(int n)
{
  char a;
  char b;

  a = 'N';
  b = 'P';
  if (n >= 0)
    {
      my_putchar(b);
    }
  else
    {
      my_putchar(a);
    }
}
