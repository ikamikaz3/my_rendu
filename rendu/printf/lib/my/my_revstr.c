/*
** my_revstr.c for my_revstr in /home/billot_t/rendu/j06
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Oct  7 09:20:14 2014 Thomas Billot
** Last update Thu Nov  6 16:23:12 2014 Thomas Billot
*/

char	*my_revstr(char *str)
{
  int	i;
  int	length;
  int	swaper;

  i = 0;
  length = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  length = i - 1;
  i = 0;
  while (i <= (length / 2))
    {
      swaper = str[i];
      str[i] = str[length - i];
      str[length - i] = swaper;
      i = i + 1;
    }
  return (str);
}
