/*
** my_list_functions.c for minishell1 in /home/billot_t/rendu/PSU_2014_minishell1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Jan 30 12:03:04 2015 Thomas Billot
** Last update Wed Feb  4 20:05:56 2015 Thomas Billot
*/

#include "allum1.h"
#include "my.h"

t_list		*init_list()
{
  t_list	*root;

  if ((root = xmalloc(sizeof(*root))) == NULL)
    return (NULL);
  root->matchs = 0;
  root->cursor = 0;
  root->next = root;
  root->prev = root;
  return (root);
}

int		my_add_in_list(t_list *element, int match_nbr, int cursor)
{
  t_list	*new_elem;

  if ((new_elem = xmalloc(sizeof(*new_elem))) == NULL)
    return (-1);
  new_elem->matchs = match_nbr;
  new_elem->cursor = cursor;
  new_elem->next = element;
  new_elem->prev = element->prev;
  element->prev->next = new_elem;
  element->prev = new_elem;
  return (0);
}

void		my_rm_in_list(t_list *element)
{
  element->prev->next = element->next;
  element->next->prev = element->prev;
  element->next->cursor = 1;
  xfree(element);
}

void		my_empty_list(t_list *root)
{
  t_list	*current;

  current = root->next;
  while (current != root)
    {
      my_rm_in_list(current);
      current = current->next;
    }
}
