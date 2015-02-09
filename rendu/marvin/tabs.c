/*
** tabs.c for marvin in /home/billot_t/rendu/marvin
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Jan  3 18:48:46 2015 Thomas Billot
** Last update Sun Jan  4 11:51:27 2015 Thomas Billot
*/

#include "marvin.h"

char	**init_types(char **tab)
{
  tab[0] = "int";
  tab[1] = "void";
  tab[2] = "char";
  tab[3] = "float";
  tab[4] = "double";
  return(tab);
}

char    **init_fr_types(char **tab)
{
  tab[0] = "entier";
  tab[1] = "vide";
  tab[2] = "caractère";
  tab[3] = "flottant";
  tab[4] = "flottant double";
  return(tab);
}
