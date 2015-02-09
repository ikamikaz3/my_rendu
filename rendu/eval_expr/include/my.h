/*
** my.h for header in /home/billot_t/rendu/Piscine_C_colles-Semaine_03/include
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Oct 25 14:59:16 2014 thomas billot
** Last update Sun Oct 26 08:32:41 2014 thomas billot
*/

#ifndef MY_H_
# define MY_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

# define BUFF_SIZE (4096)
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

void	aff_colle(char*, int, int , int);

#endif /* MY_H_ */
