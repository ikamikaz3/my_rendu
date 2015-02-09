/*
** my_getnbr.c for  in /home/zordan_n/rendu/Piscine_C_J04
** 
** Made by Nicolas Zordan
** Login   <zordan_n@epitech.net>
** 
** Started on  Thu Oct  9 16:00:10 2014 Nicolas Zordan
** Last update Sat Oct 11 15:14:21 2014 Nicolas Zordan
*/

int	my_getnbr(char *str)
{
  int	x;
  int	a;
  int	b;
  int	c;
  int	d;

  a = 0;
  b = 0;
  c = 0;
  d = 0;
  x = 1;
  while (str[a] != '\0')
    {
      if (str[a] == '-')
	{
	  a = a + 1;
	  c = c + 1;
	}
      else if (str[a] == '+')
	{
	  a = a + 1;
	  d = d + 1;
	}
      else if (str[a] >= '0' && str[a] <= '9')
	{
	  a = a + 1;
	  b = b + 1;
	}
      else
	str[a] = '\0';
    } 
  while (b > 1)
    {
      x = x * 10;
      b = b - 1;
    }
  a = 0;
  b = 0;
  while (x > 0)
    {
      b = b + (str[a + d + c] - '0') * x;
      a = a + 1;
      x = x / 10;
    }
  if (c % 2 != 0)
    b = -b;
  return (b);
}
