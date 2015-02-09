##
## Makefile for marvin in /home/billot_t/rendu/marvin
## 
## Made by Thomas Billot
## Login   <billot_t@epitech.net>
## 
## Started on  Sat Jan  3 13:36:49 2015 Thomas Billot
## Last update Sun Jan  4 16:57:22 2015 Thomas Billot
##

CC	= gcc

RM	= rm -f

LIBNAME	= libmy.a

LIBSRC	= lib/my_strlen.c \
	  lib/my_putstr.c \
	  lib/my_putchar.c \
	  lib/my_strdup.c \
	  lib/xmalloc.c \
	  lib/my_str_to_wordtab.c \
	  lib/my_strldup.c \
	  lib/my_strcmp.c

LIBOBJ	= $(LIBSRC:.c=.o)

ARRC	= ar rc

RANLIB	= ranlib

NAME	= marvin

SRC	= main.c \
	  parsing.c \
	  tabs.c

OBJ	= $(SRC:.c=.o)

CFLAGS	= -W -Wall
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Iinclude/

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
