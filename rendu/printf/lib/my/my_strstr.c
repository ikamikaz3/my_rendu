/*
** my_strstr.c for my_strstr in /home/billot_t/rendu/j06
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Oct  7 10:52:08 2014 Thomas Billot
** Last update Fri Oct 31 14:59:04 2014 Thomas Billot
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int   j;
  char *output;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	j = j + 1;
      else
	j = 0;
      if (!to_find[j])
	i = i - (j - 1);
      output = (str + i);
      return (output);
      i = i + 1;
    }
  return (0);
}
