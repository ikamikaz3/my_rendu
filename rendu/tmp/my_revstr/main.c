/*
** main.c for main in /home/billot_t/rendu/tmp
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct 23 18:13:09 2014 thomas billot
** Last update Fri Oct 24 14:44:58 2014 thomas billot
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while(str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_revstr(char *str)
{
  int	length;
  int	i;
  int	j;
  char  *ptr;
  char	swaper;
  
  j = 0;
  i = 0;
  length = 0;
  ptr = str;
  while (str[length])
    length = length + 1;
  i = length;
  while (length > ( i / 2))
    {
      swaper = ptr[length - 1];
      ptr[length - 1] = str[j];
      str[j] = swaper;
      length = length - 1;
      j = j + 1;
    }
  my_putstr(ptr);
}

int	main(int ac, char **av)
{
  char str[] = "abcdefg";

  my_revstr(av[1]);
}
