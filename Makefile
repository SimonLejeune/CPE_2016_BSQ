##
## Makefile for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ
## 
## Made by Simon LEJEUNE
## Login   <slejeune@epitech.net>
## 
## Started on  Mon Dec 12 10:51:35 2016 Simon LEJEUNE
## Last update Fri Dec 16 10:51:33 2016 LEJEUNE Simon
##

SRC	=	src/functions.c \
		src/read.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-Iinclude

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc $(OBJ) -o $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
