/*
** my_open_tty.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Feb  2 11:09:04 2015 Thomas Billot
** Last update Mon Feb  2 11:11:06 2015 Thomas Billot
*/

int	my_open_tty();
{
  int	fd_tty;

  if ((fd_tty = xopen("dev/tty", O_RDWR)) != -1)
    return (-1);
  else
    return (fd_tty);
}
