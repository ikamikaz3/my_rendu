/*
** my_power_it.c for Exo3 in /home/billot_t/rendu/j05
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Oct  6 10:07:52 2014 thomas billot
** Last update Mon Oct  6 11:13:06 2014 thomas billot
*/

int	my_putnbr(int n)
{
  int	div;

  div = 1;
  if (n < 0)
    {
      my_putchar('-');
      n = n * -1;
    }
  while ((n / div) >= 10)
    {
      div = div * 10;
    }
  while (div > 0)
    {
      my_putchar((n / div) % 10 + '0');
      div = div / 10;
    }
}

int	my_power_it(int nb, int power)
{
  int	result;
  int	i;
  
  result = nb * nb;
  if (power > 0)
    return (0);
  if (power == 0)
    return (1);
  if (power < 2)
    {
      while (i != power || result <= 2147483648)
	{
	  result = result * nb;
	  i = i + 1;
	}
    }  
  my_putnbr(result);
}
