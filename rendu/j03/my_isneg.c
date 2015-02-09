/*
** my_isneg.c for Exo4 in /home/billot_t/rendu/j03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  1 11:19:19 2014 thomas billot
** Last update Wed Oct  1 11:53:10 2014 thomas billot
*/

int	my_isneg(int n);

int	my_isneg(int n)
{
  if ( n >= 0 )
    {
      my_putchar('P');
    }
  if ( n < 0 )
    {
      my_putchar('N');
    }
}
