##
## Makefile for Bistromatique in /home/billot_t/rendu/bistromathique
## 
## Made by thomas billot
## Login   <billot_t@epitech.net>
## 
## Started on  Tue Oct 28 14:01:46 2014 thomas billot
## Last update Thu Nov 13 14:12:07 2014 Thomas Billot
##

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
		  ./lib/my/my_getnbr.c \
		  ./lib/my/my_nbrlen.c \
		  ./lib/my/functions.c \
		  ./lib/my/functions2.c \
		  ./lib/my/printf.c \
		  ./lib/my/parsing.c \
		  ./lib/my/check_list.c

LIBOBJ		= $(LIBSRC:.c=.o)

all: $(LIBNAME)

$(LIBNAME): $(LIBOBJ)
	$(ARRC) $(LIBNAME) $(LIBOBJ)
	$(RANLIB) $(LIBNAME) 

clean:
	$(RM) $(LIBOBJ)

fclean:	clean
	$(RM) $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
