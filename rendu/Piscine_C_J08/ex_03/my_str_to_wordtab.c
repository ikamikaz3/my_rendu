/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/billot_t/rendu/Piscine_C_J08/ex_03
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Oct 10 16:34:02 2014 thomas billot
** Last update Fri Oct 10 18:32:50 2014 thomas billot
*/

#include <stdlib.h>

int	my_isalpha(char c)
{
  int	result;
  
  result = 0;
  if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
      || (c >= 'A' && c <= 'Z'))
    result = 1;
  else
    result = 0;
  return (result);
}

char	**my_str_to_wordtab(char *str)
{
  int	k;
  int	i;
  int	j;
  int	length;
  char	**grid;
  
  k = 0;
  i = 0;
  length = my_strlen(str);
  while (str[i] != '\0')
    {
      if (my_isalpha(str[i]) == 0)
	{
	  grid = malloc(i);
	  while(j <= i)
	    {
	      my_putchar('A');
	      grid[k] = str[j];
	      j = j + 1;
	    }
	}
      i = i + 1;	
    }
}

int	main(int argc, char **argv)
{
  char	 str[] = "hello/world/im/thomas\0";

  my_str_to_wordtab(str);
}
