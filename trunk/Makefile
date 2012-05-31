##
## Makefile for mysh in /home/kapand_v//minishell
## 
## Made by victor kapandji
## Login   <kapand_v@epitech.net>
## 
## Started on  Wed May 23 12:43:07 2012 victor kapandji
## Last update Wed May 23 12:45:29 2012 victor kapandji
##

NAME		= mysh

CC		= gcc

RM		= rm -f

##CFLAGS	= -O2

CDEBUG	= -W -Wall -Wextra -Werror -ansi -pedantic -g -ggdb

SRC		= $(wildcard *.c) 

OBJ		= $(SRC:.c=.o)
LIB		= -L/home/kapand_v/piscine/lib/my/ -lmy
INC		= -I/home/kapand_v/piscine/include/

ECHO		= echo -e

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			@$(CC) -o $(NAME) $(OBJDIR) $(OBJ) ./lib/libmy.a
			@$(ECHO) '\033[0;32m> Compiled\033[0m'

clean		:
			-@$(RM) $(OBJ)
			@$(ECHO) '\033[0;35m> Directory cleaned\033[0m'

fclean		:		clean
			-@$(RM) $(NAME)
			@$(ECHO) '\033[0;35m> Remove executable\033[0m'

re		:	fclean all

.PHONY		:	all clean re

debug		:	$(OBJ)
			@$(CC) $(INC) $(CDEBUG) -o $(NAME) $(OBJ) $(LIB)
			@$(ECHO) '\033[0;32m> Mode Debug: done\033[0m'

.c.o		: 
			$(CC) $(INC) $(CFLAGS) -o $@ -c $<
