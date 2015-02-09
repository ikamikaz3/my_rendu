/*
** main.c for my_strdup in /home/billot_t/rendu/tmp/my_strdup
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Oct 24 16:26:23 2014 thomas billot
** Last update Fri Oct 24 17:01:17 2014 thomas billot
*/

#include <stdlib.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

char	*my_strdup(char *str)
{
  int	i;
  int	k;
  char	*ptr;

  i = 0;
  k = 0;
  while (str[i])
    {
      i = i + 1;
    }
  ptr = malloc(i * sizeof(char));
  if (ptr == NULL)
    return (ptr);
  while (k < i)
    {
      ptr[k] = str[k];
      k = k + 1;
    }
  return (ptr);
}

int	main()
{
  char	*str;
  str = my_strdup("looooool");
  if (str == NULL)
    return (1);
  my_putstr(str);
  free(str);
  return (0);
}
