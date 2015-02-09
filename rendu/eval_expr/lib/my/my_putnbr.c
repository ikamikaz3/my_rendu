/*
** my_putnbr.c for my_putnbr in /home/billot_t/rendu/Piscine_C_colles-Semaine_03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Oct 25 17:55:06 2014 thomas billot
** Last update Sun Oct 26 09:48:56 2014 thomas billot
*/

void	my_putnbr(int nb)
{
  int	div;

  div = 1;
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
