/*
** printf.c for printf in /home/billot_t/rendu/printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov  6 11:09:09 2014 Thomas Billot
** Last update Thu Nov 13 17:15:19 2014 Thomas Billot
*/

#include "../../include/printf.h"


int		my_printf(const char *format, ...)
{
  va_list	ap;
  int		i;
  
  va_start(ap, format);
  i = 0;
  while (*format)
    {
      if (*format == '%' && (check_list(*(format + 1)) == 0))
	{
	  i = parsing(i, *(format + 1), ap);
	  format = format + 1;
	}
      else
	my_putchar(*format);
      format = format + 1;
      i = i + 1;
    }
  va_end(ap);
  return (i);
}
