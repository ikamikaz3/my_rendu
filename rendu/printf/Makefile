##
## Makefile for Bistromatique in /home/billot_t/rendu/bistromathique
## 
## Made by thomas billot
## Login   <billot_t@epitech.net>
## 
## Started on  Tue Oct 28 14:01:46 2014 thomas billot
## Last update Wed Nov 12 17:01:52 2014 Thomas Billot
##

CC		= gcc

ARRC		= ar rc

RANLIB		= ranlib

RM		= rm -f

LIBNAME		= libmy.a

LIBSRC		= ./lib/my/my_putchar.c \
		  ./lib/my/my_revstr.c \
		  ./lib/my/my_strlen.c \
		  ./lib/my/my_putstr.c \
		  ./lib/my/my_putnbr.c \
		  ./lib/my/my_putnbr_base.c \
		  ./lib/my/my_getnbr.c

LIBOBJ		= $(LIBSRC:.c=.o)

NAME		= printf

SRC		= main.c \
		  parsing.c \
		  printf.c \
		  my_nbrlen.c \
		  functions.c \
		  functions2.c \


OBJ		= $(SRC:.c=.o)

all: $(LIBNAME) $(NAME)

$(LIBNAME): $(LIBOBJ)
	$(ARRC) $(LIBNAME) $(LIBOBJ)
	$(RANLIB) $(LIBNAME) 

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -I/include/. -lmy -L. 
clean:
	$(RM) $(LIBOBJ)
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(LIBNAME)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
