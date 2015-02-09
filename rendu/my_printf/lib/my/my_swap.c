/*
** my_swap.c for my_swap in /home/billot_t/rendu/lib
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:02:09 2014 Thomas Billot
** Last update Fri Oct 31 15:16:53 2014 Thomas Billot
*/

int	my_swap(int *a, int*b)
{
  int	swaper;

  swaper = 0;
  swaper = *a;
  *a = *b;
  *b = swaper;

  return (0);
}
