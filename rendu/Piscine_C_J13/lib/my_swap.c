/*
** my_swap.c for my_swap in /home/billot_t/rendu/lib
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:02:09 2014 thomas billot
** Last update Wed Oct  8 15:45:33 2014 thomas billot
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
