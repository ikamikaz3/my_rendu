/*
** my_strcpy.c for Exo1 in /home/billot_t/rendu/j06
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Oct  6 13:40:27 2014 Thomas Billot
** Last update Fri Oct 31 15:00:11 2014 Thomas Billot
*/

char 	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
