/*
** my_nbrlen.c for printf in /home/billot_t/rendu/printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov  6 13:18:22 2014 Thomas Billot
** Last update Thu Nov  6 13:32:09 2014 Thomas Billot
*/

int	my_nbrlen(int nbr)
{
  int	div;
  int	i;

  div = 1;
  i = 0;
  while ((nbr/div) >= 10)
    {
      div = div * 10;
      i = i + 1;
    }
  return (i + 1);
}
