##
## Makefile for minilib_X in /home/billot_t/rendu/tmp/minilib_X
## 
## Made by Thomas Billot
## Login   <billot_t@epitech.net>
## 
## Started on  Mon Dec  1 15:49:51 2014 Thomas Billot
## Last update Mon Dec  1 15:57:39 2014 Thomas Billot
##

CC	= gcc

RM	= rm -f

SRC	= tp1_windows_empty.c

OBJ	= $(SRC:.c=.o)

NAME	= tp1_windows_empty

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

clean :
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)
