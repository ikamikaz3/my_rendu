/*
** my_strlen.c for my_strlen in /home/billot_t/rendu/lib
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:08:50 2014 Thomas Billot
** Last update Fri Oct 31 15:01:52 2014 Thomas Billot
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
