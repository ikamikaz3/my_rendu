/*
** get_next_line.h for get_next_line in /home/billot_t/rendu/CPE_2019_get_next_line
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Nov 18 10:12:01 2014 Thomas Billot
** Last update Sun Nov 23 15:38:47 2014 Thomas Billot
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

# define BUFF_SIZE 70

char	*get_next_line(const int);
void	my_putchar(char);
char	*fonction1(char* , int, int);

#endif /* !GET_NEXT_LINE_H */

