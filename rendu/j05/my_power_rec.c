/*
** my_power_rec.c for Exo4 in /home/billot_t/rendu/j05
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Oct  6 11:37:06 2014 thomas billot
** Last update Mon Oct  6 13:30:14 2014 thomas billot
*/

int	my_putchar(char c)
{
  write(1, &c, 1); 
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

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  if (power < 0)
    return (1);
  if (power != 0)
    return (nb * my_power_rec(nb, power - 1)); 
}

int	main(void)
{
  int	result;

  result = my_power_rec(10, 5);
  my_putnbr(result);
}
