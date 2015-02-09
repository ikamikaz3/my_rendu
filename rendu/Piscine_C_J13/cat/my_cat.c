/*
** my_cat.c for my_cat in /home/billot_t/rendu/Piscine_C_J13/cat
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct 23 16:31:15 2014 thomas billot
** Last update Thu Oct 23 16:54:48 2014 thomas billot
*/

void	my_cat(int fd)
{
  int	j;
  int	return_value;
  char	buffer[10];

  return_value = 1;
  j = 0;
  while (return_value > 0)
    {
      return_value = read(fd, buffer, 10);
      buffer[return_value] = '\0';
      my_putstr(buffer);
      while (buffer[j])
	{
	  buffer[j] = '\0';
	  j = j + 1;
	}
      j = 0;
    }
}
