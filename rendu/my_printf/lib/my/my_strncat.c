/*
** my_strcat.c for my_strcat in /home/billot_t/rendu/lib
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:19:13 2014 Thomas Billot
** Last update Fri Oct 31 15:30:00 2014 Thomas Billot
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[j] != '\0' && j < n)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
