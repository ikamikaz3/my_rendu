/*
** functions.c for printf in /home/billot_t/rendu/printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov  6 15:00:49 2014 Thomas Billot
** Last update Wed Nov 12 19:52:36 2014 Thomas Billot
*/

#include "./include/printf.h"

int	char_d(va_list ap)
{
  int	d;
  int	i;

  d = va_arg(ap, int);
  i = my_nbrlen(d);
  my_putnbr(d);
  printf("i = %d", i);
  return (i);
}

int	char_s(va_list ap)
{
  char	*s;
  int	i;

  s = va_arg(ap, char*);
  i = my_strlen(s);
  my_putstr(s);
  printf("i = %d", i);
  return (i);
}

int	char_c(va_list ap)
{
  char	c;

  c = (char) va_arg(ap, int);
  my_putchar(c);
  return (1);
}

int	char_x(va_list ap)
{
  int	x;
  int	i;
  
  x = va_arg(ap, int);
  i = my_putnbr_base(x, "0123456789abcdef");
  printf("i = %d", i);
  return (i);
}

int	char_X(va_list ap)
{
  int	X;
  int	i;

  X = va_arg(ap, int);
  i = my_putnbr_base(X, "0123456789ABCDEF");
  printf("i = %d", i);
  return (i);
}
