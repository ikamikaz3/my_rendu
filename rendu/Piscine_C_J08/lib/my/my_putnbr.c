/*
** my_putnbr.c for my_putnbr in /home/billot_t/rendu
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 09:55:25 2014 thomas billot
** Last update Wed Oct  8 15:44:59 2014 thomas billot
*/

int	my_putnbr(int nb)
{
  int	div;

  div = 0;
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
  return (0);
}
