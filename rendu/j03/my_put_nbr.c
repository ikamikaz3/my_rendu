/*
** my_put_nbr.c for Exo7 in /home/billot_t/rendu/j03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  1 19:02:29 2014 thomas billot
** Last update Fri Oct  3 12:18:13 2014 thomas billot
*/

int	my_putchar(char c);
 
int	 my_put_nbr(int n)
{
  int	div;
  
  div = 1;    
  if ( n < 0)
    {
      my_putchar('-');
      if ( n = '-2147483648')
	{
	  my_putstr('2147483648');
	}
      n = n * -1;
    }

  while ((n / div) >= 10)
    {
      div = div * 10;
    }

  while (div > 0)
    {
      my_putchar((n / div) % 10 + '0');
      div = div / 10;
    }
}

int	 my_putchar(char c)
{
  write(1, &c, 1);
}

int	 main()
{
  int number;
  
  number = -2147483648;
  my_put_nbr(number);
}
