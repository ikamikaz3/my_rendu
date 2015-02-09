﻿/*
** my.h for my.h in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 19:07:32 2014 Thomas Billot
** Last update Tue Jan 13 11:09:30 2015 Thomas Billot
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

char    *my_strdup(char *str);
void    my_putchar(char c);
void    my_put_nbr(int nb);
void    my_putstr(char *s);
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

