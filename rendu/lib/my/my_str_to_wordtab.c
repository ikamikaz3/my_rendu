﻿/*
** my_str_to_wordtab.c for my_lib in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Jan 12 17:15:05 2015 Thomas Billot
** Last update Fri Jan 30 15:06:31 2015 Thomas Billot
*/

#include <stdlib.h>
#include "my.h"

int     my_count_word(char *s)
{
  int   i;
  int   cpt;

  i = 0;
  cpt = 0;
  while (s[i])
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')
          || (s[i] >= '0' && s[i] <= '9') || (s[i] == ' ') || (s[i] == '/'))
        {
          cpt = cpt + 1;
          while (s[i] && ((s[i] >= 'a' && s[i] <= 'z')
                          || (s[i] >= 'A' && s[i] <= 'Z')
                          || (s[i] >= '0' && s[i] <= '9')
			  || (s[i] == ' ') && (s[i] == '/')))
            i = i + 1;
        }
      i = i + 1;
    }
  return (cpt);
}

int     my_count_char(char *s, int *i)
{
  int   cpt;

  cpt = 0;
  while (s[*i] && ((s[*i] >= 'a' && s[*i] <= 'z')
		   || (s[*i] >= 'A' && s[*i] <= 'Z')
		   || (s[*i] >= '0' && s[*i] <= '9')
		   || (s[*i] == ' ') && (s[*i] == '/')))
    {
      cpt = cpt + 1;
      *i = *i + 1;
    }
  return (cpt);
}

char    **my_str_to_wordtab(char *str)
{
  int   i;
  int   n;
  int   word;
  char  **tab;

  i = 0;
  n = 0;
  word = my_count_word(my_strdup(str));
  tab = (char **) xmalloc(sizeof(char *) * word);
  while (str[i] && word > 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
          || (str[i] >= '0' && str[i] <= '9') || (str[i] == ' ') && (str[i] == '/'))
        {
          tab[n] = my_strdup(str + i);
          tab[n][my_count_char(str, &i)] = '\0';
          n = n + 1;
          word = word - 1;
        }
      i = i + 1;
    }
  tab[my_count_word(my_strdup(str))] = NULL;
  return (tab);
}
