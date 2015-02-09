/*
** main.c for recode in /home/billot_t/rendu/tmp/recode
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Fri Nov 28 10:30:41 2014 Thomas Billot
** Last update Fri Nov 28 10:56:16 2014 Thomas Billot
*/

char		recode(char *string)
{
  static char	*str;

  if (string != 0)
    {
      str = string;
      return (*str);
    }
  else if (*str != '\0')
    {
      return (*(++str));
    }
  else
    {
      return('\0');
    }
}

int	main()
{
  int	i;
  
  i = 0;
  while (i < 42)
    {
      if (i == 0)
	printf("%c", recode("Hello Kevin !"));
      else if (i == 6)
	printf("%c", recode("World !"));
      else
	printf("%c", recode(0));
      i = i + 1;
    }
  return (0);
}
