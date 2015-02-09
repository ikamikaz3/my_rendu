/*
** get_next_line.c for get_next_line in /home/billot_t/rendu/CPE_2014_get_next_line
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Nov 18 10:09:53 2014 Thomas Billot
** Last update Sun Nov 23 17:24:52 2014 Thomas Billot
*/

#include "include/get_next_line.h"

char	*fonction1(char *buffer, int counter, int save)
{
  char	*str;
  int	i;

  i = 0;
  str = malloc(sizeof(*str) * (counter - save));
  if (str == NULL)
    return (NULL);
  while ((i + save) < counter)
    {
      str[i] = buffer[save + i];
      i = i + 1;
    }
  if (str[0] == '\0')
    return (NULL);
  else
    {
      str[i] = '\0';
      return (str);
    }
}

char		*get_next_line(const int fd)
{
  static char	buffer[BUFF_SIZE];
  static int	counter = 0;
  int		save;
  char		*str;

  if (counter != 0)
    counter = counter + 1;
  if (counter == 0)
    read(fd, buffer, BUFF_SIZE);
  save = counter;
  while (buffer[counter] != '\n' && buffer[counter] != '\0')
    {
      counter = counter + 1;
    }
  str = fonction1(buffer, counter, save);
  if (str == NULL)
    return (NULL);
  else
    return (str);
}
