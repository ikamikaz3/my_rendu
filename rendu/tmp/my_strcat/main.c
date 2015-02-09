/*
** main.c for my_strcpy in /home/billot_t/rendu/tmp/my_strcpy
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Oct 24 09:29:53 2014 thomas billot
** Last update Fri Oct 24 14:47:04 2014 thomas billot
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

char	*my_strcpy(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(dest[i])
    {
      i = i + 1;
    }
  while(src[j])
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  return(dest);
}

int	main(int ac, char **av)
{
  char	*str;
  char  str1[40] = "Hello World";

  str = my_strcpy(str1, av[2]);
  my_putstr(str);
}
