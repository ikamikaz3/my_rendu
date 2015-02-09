/*
** main.c for main in /home/billot_t/rendu/Piscine_C_J13/cat
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct 23 10:33:14 2014 thomas billot
** Last update Thu Oct 23 17:05:59 2014 thomas billot
*/

#include "../include/my.h"

int	main(int argc, char **argv)
{
  int	i;
  int	fd;

  i = 1;
  fd = 0;
  while (argv[i] != '\0')
    {
      fd = open(argv[i],O_RDONLY);
      if (fd != -1)
	{
	  my_cat(fd); 
	  close(fd);   
	}
      else
	{
	  my_putstr("cat: ");
	  my_putstr(argv[i]);
	  my_putchar(':');
	  my_putstr(" Permission denied\n");
	}
      i = i + 1;
    }
  return (EXIT_SUCCESS);
}
