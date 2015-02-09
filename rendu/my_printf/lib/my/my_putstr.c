/*
** my_putstr.c for my_putstr in /home/billot_t/rendu/lib
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:06:32 2014 Thomas Billot
** Last update Fri Oct 31 15:18:21 2014 Thomas Billot
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
