 /*
** parsing.c for printf in /home/billot_t/rendu/printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov  6 11:37:19 2014 Thomas Billot
** Last update Mon Nov 10 13:23:33 2014 Thomas Billot
*/

#include <stdarg.h>

int	parsing(char *str, va_list ap)
{
  int	i;
  int	d;
  int	x;
  char	c;
  char	*s;

  i = 0;
  while (*str != ' ' && *str != '\n')
    {
      if (*str == 'd')
	{
	  d = va_arg(ap, int);
	  i = my_nbrlen(d);
	  my_putnbr(d);
	}
      else if (*str == 's')
	{
	  s = va_arg(ap, char*);
	  i = my_strlen(s) - 1;
	  my_putstr(s);
	}
      else if (*str == 'c')
	{
	  c = (char) va_arg(ap, int);
	  my_putchar(c);
	  i = 1;
	}
      else if (*str == 'x')
	{
	  x = va_arg(ap, int);
	  i = my_putnbr_base(x, "0123456789abcdef");
	}
      else if (*str == 'X')
	{
	  d = va_arg(ap, int);
	  i = my_putnbr_base(d, "0123456789ABCDEF");
	}
      str = str + 1;
    }
  return (i);
}
