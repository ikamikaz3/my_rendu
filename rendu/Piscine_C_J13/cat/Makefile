##
## Makefile for Makefile in /home/billot_t/rendu/Piscine_C_J13
## 
## Made by thomas billot
## Login   <billot_t@epitech.net>
## 
## Started on  Thu Oct 23 10:32:48 2014 thomas billot
## Last update Thu Oct 23 16:41:37 2014 thomas billot
##

CC	= gcc

RM	= rm -f

SRC	= main.c \
	  my_cat.c

OBJ	= $(SRC:.c=.o)

HEADER	= my.h

NAME	= cat

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lmy -L../lib -I../include/$(HEADER)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
