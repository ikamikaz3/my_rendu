/*
** j03.c for j03 in /home/billot_t/rendu/j03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  1 08:42:38 2014 thomas billot
** Last update Wed Oct  1 08:59:06 2014 thomas billot
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  char	c;

  c = 'a';
  my_putchar(c);
}
