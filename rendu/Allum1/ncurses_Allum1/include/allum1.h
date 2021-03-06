/*
** allum1.h for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Feb  2 16:31:23 2015 Thomas Billot
** Last update Wed Feb  4 18:29:40 2015 Thomas Billot
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

typedef struct	s_list
{
  int		matchs;
  int		cursor;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

typedef struct	s_ftab
{
  int	       	key;
  t_list	*(*fptr)(t_list *current);
}      		t_ftab;

int		my_interface(void);
t_list		*init_list(void);
int		my_aff_matches(t_list *root);
int		my_add_in_list(t_list *root, int match_nbr, int cursorx);
t_list		*my_player_turn(t_list *current, int *turn);
int		my_treatment(t_list *root);
t_list		*my_up_arrow(t_list *current);
t_list		*my_down_arrow(t_list *current);
t_list		*my_enter(t_list *current);
void		my_rm_in_list(t_list *element);
#endif /* !ALLUM1_H_ */
