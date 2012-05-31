/*
** my_power_rec.c for my_power_rec in /home/kapand_v//Taff/piscine/Jour_05
** 
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
** 
** Started on  Mon Mar 12 15:12:10 2012 victor kapandji
** Last update Mon Mar 12 15:34:36 2012 victor kapandji
*/

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (0);
  else if (power > 1)
    nb = nb * my_power_rec(nb, power - 1);
  return (nb);
}
