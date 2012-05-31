/*
** my_swap.c for my_swap in /home/kapand_v//Jour_04
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Thu Mar  8 16:36:04 2012 victor kapandji
** Last update Fri Mar  9 17:54:19 2012 victor kapandji
*/

int	my_swap(int *a, int *b)
{
  int	c;
  int	d;

  c = *a;
  d = *b;
  if (*a != *b)
    {
      *a = d;
      *b = c;
    }
}
