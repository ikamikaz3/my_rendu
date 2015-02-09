/*
** my_getnbr.c for my_getnbr in /home/billot_t/rendu/j06
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct  9 09:43:42 2014 thomas billot
** Last update Mon Oct 20 17:31:30 2014 thomas billot
*/

char	*my_strcut(char *str, char *sign)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] == '-' ) || (str[i] == '+'))
	  *sign = str[i];
      else if ((str[i] >= 48) && (str[i] <= 57))
	  i = i;
      else
	str[i + 1] = '\0';
      i = i + 1;
    }
  return (str);
}

int	my_getnbr(char *str)
{
  int	result;
  char	sign;
  int	length;
  int	n;

  n = 10;
  str = my_strcut(str, &sign);
  length = my_strlen(str) - 2;
  while (length >= 0)
    {
      if ((str[length] != '-') && (str[length] != '+'))
	{
	  if (result > 0)
	    {
	      result = ((str[length] - 48) * n) + result;
	      n = n * 10;
	    }
	  else
	    result = str[length] - 48;
	}	
      length = length - 1;
    }
  if (sign == '-')
     return (-result);
  return (result);
}
