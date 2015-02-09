/*
** my_strcmp.c for my_strcmp in /home/billot_t/rendu/j06
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Oct  7 13:29:41 2014 thomas billot
** Last update Wed Oct  8 15:43:54 2014 thomas billot
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
