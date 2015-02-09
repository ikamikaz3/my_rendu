/*
** marvin.h for marvin in /home/billot_t/rendu/marvin
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Jan  3 11:43:46 2015 Thomas Billot
** Last update Sun Jan  4 17:26:21 2015 Thomas Billot
*/

#ifndef MARVIN_H_
# define MARVIN_H_

#define UNSIGNED 0
typedef struct	s_list
{
  char		*str;
  int		(*fptr)(char**);		
}		t_list;

int		parsing(char**);
char		**init_types(char**);
char		**init_fr_types(char**);
char		*my_get_funcname(char**, int);
char		*my_get_rettype(char**, int, char**, char**);
#endif /* MARVIN_H_ */
