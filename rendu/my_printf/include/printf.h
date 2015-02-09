/*
** bistromathique.h for bistromathique in .
** 
** Made by Charlie Root
** Login   <rn@epita.fr>
** 
** Started on  Tue Oct 23 11:48:35 2001 Charlie Root
** Last update Thu Nov 13 17:12:57 2014 Thomas Billot
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct s_list
{
  char	specifier;
  int	(*f)(va_list);
} t_list;

typedef struct s_format_tags
{
  int	format_tags_nbr;
  int	(*f)(int, va_list);
} t_format_tags;

int	check_list(char);
int	my_printf(const char*, ...);
int	parsing(int, char, va_list);
int	my_nbrlen(int);
int	char_d(va_list);
int	char_s(va_list);
int	char_c(va_list);
int	char_x(va_list);
int	char_X(va_list);
int	char_b(va_list);
int	char_o(va_list);
int	char_p(va_list);
int	char_u(va_list);
int	char_S(va_list);
#endif
