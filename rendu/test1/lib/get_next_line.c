/*
** get_next_line.c for bsq in /home/billot_t/rendu/CPE_2014_bsq
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 14:56:41 2014 Thomas Billot
** Last update Thu Dec 18 14:36:01 2014 Thomas Billot
*/

#include <stdlib.h>
#include "my.h"

int     my_buffer_to_line(char *line, char *buffer, char *saver)
{
  int   i;
  int   j;

  j = 0;
  i = my_strlen(line);
  while (buffer[j])
    {
      if (buffer[j] == '\n' || i == LEN)
        {
          line[i] = 0;
          if (buffer[j] == '\n')
            j++;
          saver = my_strcpy(saver, buffer + j);
          return (1);
        }
      line[i++] = buffer[j++];
    }
  saver[0] = 0;
  line[i] = 0;
  return (0);
}

char    *get_next_line(const int fd)
{
  static char   saver[BUFF_SIZE];
  char  buffer[BUFF_SIZE + 1];
  char  *line;
  int   length;

  line = malloc(sizeof(char) * LEN);
  if (line == NULL)
    return (NULL);
  line[0] = 0;
  if (my_buffer_to_line(line, saver, saver) == 1)
    return (line);
  while ((length = read(fd, buffer, BUFF_SIZE)) > 0 && LEN > 0)
    {
      buffer[length] = 0;
      if (my_buffer_to_line(line, buffer, saver) == 1)
        return (line);
    }
  if (line != NULL && line[0] != 0)
    return (line);
  return (NULL);
}
