/*
** my_factorielle_rec.c for Exo2 in /home/billot_t/rendu/j05
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Oct  3 11:15:09 2014 thomas billot
** Last update Mon Oct  6 09:50:06 2014 thomas billot
*/

int	my_factorielle_rec(int nb);
int	my_putnbr(int nb);	

int	my_factorielle_rec(int nb)
{
  if (nb <= 12)
    {
      if (nb < 0)
	return (0);
      if (nb == 0)
	return (1);
      return (nb * my_factorielle_rec(nb - 1));
    }
  else
    return (0);
}

int	my_putnbr(int nb)
{
  int	div;
  
  div = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while ((nb / div) >= 10)
    {
      div = div * 10;
    }
  while (div > 0)
    {
      my_putchar((nb / div) % 10 + '0');
      div = div / 10;
    }
}
