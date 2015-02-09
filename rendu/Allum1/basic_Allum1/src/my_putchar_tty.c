/*
** my_putchar_tty.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Feb  2 11:07:28 2015 Thomas Billot
** Last update Mon Feb  2 11:08:05 2015 Thomas Billot
*/

int	my_putchar_tty(int c, int fd_tty);
{
  write(fd_tty, &c, 1);
  return (0);
}
