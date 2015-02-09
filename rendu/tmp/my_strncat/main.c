/*
** main.c for my_strcpy in /home/billot_t/rendu/tmp/my_strcpy
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Oct 24 09:29:53 2014 thomas billot
** Last update Fri Oct 24 09:56:42 2014 thomas billot
*/

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

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i])
    {
      i = i + 1;
    }
  while ((src[j]) && (j < n))
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  return (dest);
}

int	main(void)
{
  char	*str;
  char  str2[40] = "je m'apelle";

  str = my_strncat(str2,"abdoulay", 2);
  my_putstr(str);
}
