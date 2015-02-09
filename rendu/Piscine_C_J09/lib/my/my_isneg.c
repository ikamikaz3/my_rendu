/*
** my_isneg.c for my_isneg in /home/billot_t/rendu/Piscine_C_J07/lib/my
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 16:40:53 2014 thomas billot
** Last update Wed Oct  8 16:42:42 2014 thomas billot
*/

int	my_isneg(int n)
{
  if (n >= 0)
    {
      my_putchar('P');
    }
  if (n < 0)
    {
      my_putchar('N');
    }
  return (0);
}
