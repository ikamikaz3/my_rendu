/*
** tp1_windows_empty.c for minilib_X in /home/billot_t/rendu/tmp/minilib_X
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Dec  1 15:46:19 2014 Thomas Billot
** Last update Mon Dec  1 16:35:54 2014 Thomas Billot
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
  
  weigth = 100;
  length = 100;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 500, 500, "My first Window");
  while (weigth != 400)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, weigth, length, 0xFFFFFF);
      weigth++;
    }
  weigth = 100;
  while (length != 200)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, weigth, length, 0xFFFFFF);
      mlx_pixel_put(mlx_ptr, win_ptr, weigth + 300, length, 0xFFFFFF);
      length = length + 1;
    }
  while (weigth != 400)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, weigth, length, 0xFFFFFF);
      weigth++;
    }
  while (42)
    ;
}
