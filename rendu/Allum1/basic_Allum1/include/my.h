/*
** my.h for my_lib in /home/billot_t/rendu/CPE_2014_bsq
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Jan 12 17:08:26 2015 Thomas Billot
** Last update Fri Jan 16 15:51:47 2015 Thomas Billot
*/

#ifndef MY_H_
# define MY_H_

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

char    *my_strdup(char *str);
void    my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *s);
void	my_puterror(char *s);
int     my_strlen(char *str);
int     my_getnbr(char *str);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int nb);
char    *my_revstr(char *str);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int nb);
char    *my_strcat(char *dest, char *src);
char    *my_strncat(char *dest, char *src, int nb);
int     my_strlcat(char *dest, char *src, int size);
char    **my_str_to_wordtab(char *str);
int     my_putnbr_base(int nbr, char *base);
int     my_getnbr_base(char *str, char *base);
char    *convert_base(char *nbr, char *base_from, char *base_to);
void    xfree(void *data);
void    *xmalloc(int size);
int     xread(int fd, char *buf, int size);
int     xopen(char *file, int flags);
int     xclose(int fildes);
char    *get_next_line(const int fd);

#define BUFF_SIZE  (2)
#define LEN        (5048)

#endif  /* !MY_H_ */

