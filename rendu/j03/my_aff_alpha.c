/*
** my_aff_alpha.c for Exo1 in /home/billot_t/rendu/j03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  1 09:30:25 2014 thomas billot
** Last update Wed Oct  1 10:22:13 2014 thomas billot
*/
int	my_aff_alpha();

int	my_aff_alpha()
{
  char	a;

  a = 97;
  while (a <= 122)
    {
      my_putchar(a);
      a++;
    }
}
