##
## Makefile for pushswap in /home/billot_t/rendu/CPE_2014_Pushswap
## 
## Made by Thomas Billot
## Login   <billot_t@epitech.net>
## 
## Started on  Tue Dec  9 15:50:53 2014 Thomas Billot
## Last update Sun Jan 18 18:54:04 2015 Thomas Billot
##

CC	= gcc

RM	= rm -f

LIBNAME	= libmy.a

LIBSRC	= lib/get_next_line.c \
	  lib/my_getnbr.c \
	  lib/my_strlen.c \
	  lib/my_putstr.c \
	  lib/my_puterror.c \
	  lib/my_put_nbr.c \
	  lib/my_getnbr.c \
	  lib/my_putchar.c \
	  lib/my_strcpy.c \
	  lib/xopen.c \
	  lib/xmalloc.c \
	  lib/xfree.c \
	  lib/xclose.c

LIBOBJ	= $(LIBSRC:.c=.o)

ARRC	= ar rc

RANLIB	= ranlib

NAME	= bsq

SRC	= main.c \
	  my_put_in_tab.c \
	  my_square.c

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I./include/.

LDFLAGS = -lmy -L.

all: $(LIBNAME) $(NAME)

$(LIBNAME): $(LIBOBJ)
	$(ARRC) $(LIBNAME) $(LIBOBJ)
	$(RANLIB) $(LIBNAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS) 

clean:
	$(RM) $(OBJ)
	$(RM) $(LIBOBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBNAME)

re: fclean all

.PHONY: re clean fclean all
