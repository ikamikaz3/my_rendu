/*
** my_strncpy.c for my_strncpy in /home/billot_t/rendu/Piscine_C_J07/lib/my
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 15:39:00 2014 thomas billot
** Last update Wed Oct  8 15:39:46 2014 thomas billot
*/

char 	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      if (i == n)
	{
	  dest[i] = '\0';
	  my_putstr(dest);
	}
      i = i + 1;
    }
}
