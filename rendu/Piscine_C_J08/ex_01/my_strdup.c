/*
** my_strdup.c for my_strdup in /home/billot_t/rendu/Piscine_C_J08/ex_01
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 18:13:41 2014 thomas billot
** Last update Wed Oct  8 18:37:46 2014 thomas billot
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  int	i;
  int	lenght;
  char  *result;

  i = 0;
  lenght = 0;
  while (src[lenght] != '\0')
    {
      lenght = lenght + 1;
    }
  result = malloc(lenght);
  while (src[i] != '\0')
    {
      result[i] = src[i];
      i = i + 1;
    }
  return (result);
}
