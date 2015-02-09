##
## Makefile for pushswap in /home/billot_t/rendu/CPE_2014_Pushswap
## 
## Made by Thomas Billot
## Login   <billot_t@epitech.net>
## 
## Started on  Tue Dec  9 15:50:53 2014 Thomas Billot
## Last update Wed Feb  4 21:06:25 2015 Thomas Billot
##

CC	= gcc

RM	= rm -f

ARRC	= ar rc

RANLIB	= ranlib

NAME	= Allum

LIBNAME	= lib/libmy.a

LIBSRC	= my_puterror.c \
	  my_strlen.c \
	  xmalloc.c \
	  xfree.c \
	  my_putstr.c \
	  my_putchar.c \
	  my_getnbr.c \
	  my_power_rec.c 

LIBOBJ	= $(LIBSRC:.c=.o)

LIBPATH = lib/

LIBLIST = $(addprefix $(LIBPATH), $(LIBOBJ))

SRC	= main.c \
	  my_interface.c \
	  my_list_functions.c \
	  my_aff_matches.c \
	  my_treatment.c \
	  my_key_functions.c

OBJ	= $(SRC:.c=.o)

OBJPATH = src/

OBJLIST = $(addprefix $(OBJPATH), $(OBJ))

CFLAGS	= -Wall -Wextra
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Iinclude/

LDFLAGS = -lmy -Llib/ -lncurses

all: $(LIBNAME) $(NAME)

$(LIBNAME): $(LIBLIST);
	$(ARRC) $(LIBNAME) $(LIBLIST)
	$(RANLIB) $(LIBNAME)

$(NAME): $(OBJLIST)
	$(CC) $(CFLAGS) $(OBJLIST) -o $(NAME) $(LDFLAGS) 

clean:
	$(RM) $(OBJLIST)
	$(RM) $(LIBLIST)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBNAME)

re: fclean all

.PHONY: re clean fclean all
