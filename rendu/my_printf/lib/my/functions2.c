/*
** functions2.c for functions2 in /home/billot_t/rendu/printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Nov 10 15:16:24 2014 Thomas Billot
** Last update Fri Nov 14 12:18:30 2014 Thomas Billot
*/

#include "../../include/printf.h"

int	char_o(va_list ap)
{
  int	o;
  int	i;
  o = va_arg(ap, int);
  i = my_putnbr_base(o, "01234567");
  return (i);
}

int	char_b(va_list ap)
{
  int	b;
  int	i;

  b = va_arg(ap, int);
  i = my_putnbr_base(b, "01");
  return (i);
}

int		char_p(va_list ap)
{
  char		const *base;
  unsigned long adr;
  char		res[12];
  int		i;

  adr = (unsigned long) va_arg(ap, void const*);
  base = "0123456789abcdef";
  i = 11;
  while ((adr / 16) > 0 || i > 0)
    {
      res[i] = base[(adr % 16)];
      adr = adr / 16;
      i = i - 1;
    }
  res[i] = base[(adr % 16)];
  my_putstr("0x");
  my_putstr(res);
  return (13);
}

int	char_u(va_list ap)
{
  unsigned int nbr;
  int	div;
  int	i;

  nbr = va_arg(ap, unsigned int);
  div = 1;
  i = 0;
  while ((nbr / div) >= 10)
    {
      div = div * 10;
    }
  while (div > 0)
    {
      my_putchar((nbr / div) % 10 + '0');
      i = i + 1;
      div = div / 10;
    }
  return (i - 1);
}

int	char_S(va_list ap)
{
  char	*s;
  int	i;

  s = va_arg(ap, char*);
  while(*s)
    {
      if(*s <= 32 || *s > 127)
	{
	  my_putchar('\\');
	  my_putnbr_base(*s, "01234567");
	}
      else
	my_putchar(*s);
      s = s + 1;
    }
}
