/*
** colle_1.c for colle_1 in /home/billot_t/rendu
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Oct  4 12:22:00 2014 thomas billot
** Last update Sat Oct  4 14:37:56 2014 thomas billot
*/

int	colle(int x, int y);
int	my_putchar(char c);
int	my_putstr(char *str);

int	colle(int x, int y)
{
  int	i;
  int	length;
  
  i = 0;
  length = x - 2;
  my_putchar('o');
  while (i < x)
    {
      while ( i < length
      my_putchar('-');
      i = i + 1;
    }
  my_putchar('o');
  return (0);
}

int	my_putstr(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return(0);
}

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main(void)
{
  int	a;
  int	b;

  a = 5;
  b = 5;
  colle(a, b);
  return (0);
}
