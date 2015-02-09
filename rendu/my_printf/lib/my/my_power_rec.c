/*
** my_power_rec.c for Exo4 in /home/billot_t/rendu/j05
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Oct  6 11:37:06 2014 Thomas Billot
** Last update Fri Oct 31 15:27:31 2014 Thomas Billot
*/

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  if (power < 0)
    return (1);
  if (power != 0)
    return (nb * my_power_rec(nb, power - 1));
}
