/*
** my_putnbr_base.c for my_putnbr_base in /home/billot_t/rendu/test
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct  9 17:05:23 2014 thomas billot
** Last update Fri Oct 10 16:08:46 2014 thomas billot
*/

int	my_putnbr_base(int nbr, char *base)
{
  int	counter;
  int	n;
  int	div;
  char	tmp;
  
  counter = 0;
  tmp = 0;
  div = 1;
  n = 1;
  while (base[n] != '\0')
    {
      n = n + 1;
    }
  my_putnbr(n);
  my_putchar('\n');
  while((nbr / div) >= 10)
    {
      div = div * 10;
    }
  my_putnbr(div);
  my_putchar('\n');
  while(div > 0)
    {
      tmp = ((nbr / div) % n + '0');
	while(base[counter] != tmp)
	  {
	    counter = counter + 1;
	  }
      my_putchar(base[counter]);
      counter = 0;
      tmp = 0;
      div = div / 10;
    }
}

int	main(void)
{
  char str[] = "0123456789";
  int number;

  number = 23456677;
  my_putnbr_base(number, str);
}
