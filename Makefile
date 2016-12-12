##
## Makefile for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ
## 
## Made by Simon LEJEUNE
## Login   <slejeune@epitech.net>
## 
## Started on  Mon Dec 12 10:51:35 2016 Simon LEJEUNE
## Last update Mon Dec 12 11:54:04 2016 Simon LEJEUNE
##

SRC	=	src/functions.c \
		src/read.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc $(OBJ) -o $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
