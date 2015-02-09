/*
** my_strcmp.c for my_strcmp in /home/billot_t/rendu/j06
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Oct  7 13:29:41 2014 Thomas Billot
** Last update Fri Oct 31 15:00:36 2014 Thomas Billot
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	{
	  return (s1[i] - s2[i]);
	}
      if ((s1[i] || s2[i]) == '\0')
	{
	  return (0);
	}
      i = i + 1;
    }
  return (0);
}
