/*
** my_evil_str.c for Exo3bis in /home/billot_t/rendu/j04
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct  2 17:12:36 2014 thomas billot
** Last update Thu Oct  2 22:38:12 2014 thomas billot
*/

char	*my_evil_str(char *str);
int	my_strlen(char *str);
int	my_putchar(char c);
char	*my_putstr(char *str);

#include <string.h>

char	*my_evil_str(char *str)
{
  int i;
  char swaper;
  int length;

  i = 0;
  length = my_strlen(str) - 1;
  while ( i <= (length / 2))
    {
      swaper = str[i];
      str[i] = str[length - i];
      str[length - i] = swaper;
      i = i + 1;
    }
  return (str);
}

char	*my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (str);
}

int	my_strlen(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main(void)
{
  char *str;

  str = strdup("cannabis");  
  my_evil_str(str);
  my_putstr(str);
  return(0);
}
