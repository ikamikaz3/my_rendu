/*
** my_aff_revalpha.c for Exo2 in /home/billot_t/rendu/j03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  1 10:26:09 2014 thomas billot
** Last update Wed Oct  1 10:51:03 2014 thomas billot
*/

int	my_aff_revalpha();

int	my_aff_revalpha()
{
  char	a;

  a = 122;
  while (a >= 97)
    {
      my_putchar(a);
      a--;
    } 
}

