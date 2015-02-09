/*
** tp1_windows_empty.c for minilib_X in /home/billot_t/rendu/tmp/minilib_X
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Dec  1 15:46:19 2014 Thomas Billot
** Last update Mon Dec  1 16:19:25 2014 Thomas Billot
*/

void	*mlx_init();
void	*mlx_new_window(void*, int, int, char*);
void	mlx_pixel_put(void*, void*, int, int, int);

int	main()
{
  void	*mlx_ptr;
  void	*win_ptr;
  int	weigth;
  int	length;
  
  weigth = 0;
  length = 0;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 500, 500, "My first Window");
  while (weigth != 500)
    {
      while(length != 500)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, weigth, length, 0xFFFFFF);
	  length++;
	}
      weigth++;
      length = 0;
    }
  while (42)
    ;
}
