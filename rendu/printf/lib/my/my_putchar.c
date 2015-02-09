/*
** my_putchar.c for my_putchar in /home/billot_t/rendu
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 09:53:52 2014 Thomas Billot
** Last update Fri Oct 31 15:22:59 2014 Thomas Billot
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
