/*
** my_strstr.c for lib in /home/billot_t/rendu/CPE_2014_bsq
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Jan 16 15:50:43 2015 Thomas Billot
** Last update Fri Jan 16 15:50:46 2015 Thomas Billot
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
