/*
** my_putchar.c for my_putchar in /home/billot_t/rendu
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 09:53:52 2014 thomas billot
** Last update Wed Oct  8 09:55:08 2014 thomas billot
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
