/*
** printf.c for printf in /home/billot_t/rendu/printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov  6 11:09:09 2014 Thomas Billot
** Last update Thu Nov 13 10:35:41 2014 Thomas Billot
*/

#include "./include/printf.h"


int		my_printf(const char *format, ...)
{
  va_list	ap;
  int		counter;
  int		i;
  int		return_value;
  t_list char_list[] = {{'d', &char_d},
			{'i', &char_d},
			{'c', &char_c},
			{'s', &char_s},
			{'x', &char_x},
			{'X', &char_X},
			{'b', &char_b},
			{'o', &char_o},
			{'p', &char_p},
			{'u', &char_u},
			{'\0', NULL}};
  
  /* char char_flag[] = "-+ #0\0";
     int	width;
     char char_length[] = "hlL\0";
     t_format_tags function_ptr[] = {{1, &format_1},
     {2, &format_2},
     {3, &format_3},
     {0, NULL}};
     char		*tag;
     int		tags_nbr;
  */
  va_start(ap, format);
  i = 0;
  counter = 0;
  while (*format)
    {
      if (*format == '%')
	{
	  i = i - 2;
	  while (char_list[counter].f != NULL)
	    {
	      if (char_list[counter].specifier == (*(format + 1)))
		{
		  return_value = char_list[counter].f(ap);
		  i = return_value + i;
		}
	      counter = counter + 1;
	    }
	  format = format + 1;
	  counter = 0;
	}
      else
	my_putchar(*format);
      format = format + 1;
      i = i + 1;
    }
  va_end(ap);
  my_putnbr(i);
  return (i);
    
}
