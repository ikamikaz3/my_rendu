/*
** my_revstr.c for my_revstr in /home/billot_t/rendu/j06
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Oct  7 09:20:14 2014 thomas billot
** Last update Wed Oct  8 15:45:16 2014 thomas billot
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
  while (i < (length / 2))
    {
      swaper = str[i];
      str[i] = str[length - i];
      str[length - i] = swaper;
      i = i + 1;
    }
  return (str);
}
