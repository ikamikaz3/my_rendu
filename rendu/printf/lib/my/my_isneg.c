/*
** my_isneg.c for my_isneg in /home/billot_t/rendu/Piscine_C_J07/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 16:40:53 2014 Thomas Billot
** Last update Fri Oct 31 15:29:37 2014 Thomas Billot
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
