/*
** my_aff_comb.c for Exo5 in /home/billot_t/rendu/j03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  1 12:10:59 2014 thomas billot
** Last update Wed Oct  1 18:51:04 2014 thomas billot
*/

int	my_aff_comb();
int	my_putchar(char c);
int	print(char i, char j,char k);

int	my_aff_comb()
{
  char	a;
  char	b;
  char	c;
  
  a = 48;
  b = 48;
  c = 48;
  while ( a < 58 )
    { 
      while ( b < 58)
	{
	  while ( c < 58)
	    {	
	      if ( a != b && b != c && a != c && a < b && b < c)
		{
		  print( a, b, c);
		}
	      c = c + 1;
	    }
	  c = 48;
	  b = b + 1;
	}
      b = 48;
      a = a + 1;
    }
}

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	print(char i, char j, char k)
{
  my_putchar(i);
  my_putchar(j);
  my_putchar(k);
  if ( i + j + k < 168 )
    {
      my_putchar(',');
      my_putchar(' ');
    } 
}

int	main(void)
{
  my_aff_comb();
}
