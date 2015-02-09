/*
** my_getnbr.c for my_getnbr in /home/billot_t/rendu/j06
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct  9 09:43:42 2014 Thomas Billot
** Last update Fri Oct 31 15:32:27 2014 Thomas Billot
*/

int	my_return(char *str, int n)
{
  int	i;
  int	result;

  i = 0;
  result = 0;
  while (n > 0)
    {
      if ((str[i] >= 48) && (str[i] <= 57))
	{
	  result = ((str[i] - 48) * n) + result;
	  n = n / 10;
	}
      i = i + 1;
    }
  return (result);
}

char	*my_strcut(char *str, char *sign)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] == '-' ) || (str[i] == '+'))
	{
	  *sign = str[i];
	}
      else if ((str[i] < 48) || (str[i] > 57))
	str[i] = '\0';
      i = i + 1;
    }
  return (str);
}

int	my_getnbr(char *str)
{
  int	i;
  int	result;
  char	sign;
  int	length;
  int	n;

  i = 0;
  result = 0;
  n = 1;
  str = my_strcut(str, &sign);
  length = my_strlen(str) - 1;
  while (i < length)
    {
      if ((str[i] >= 48) && (str[i] <= 57))
	n = n * 10;
      i = i + 1;
    }
  i = 0;
  result = my_return(str, n);
  if (sign == '-')
    return (-result);
  return (result);
}

