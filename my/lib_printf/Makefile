##
## Makefile for lib_printf in /home/kapand_v//Taff/piscine/lib/lib_printf
## 
## Made by victor kapandji
## Login   <kapand_v@epitech.net>
## 
## Started on  Thu Apr 26 15:43:01 2012 victor kapandji
## Last update Thu Apr 26 15:53:29 2012 victor kapandji
##

SRC	=	my_printf.c \
		function_2.c \
		function.c \
		my_putnbr_base.c

OBJ	=	$(SRC:.c=.o)

NAME	=	lib_printf.a

RM	=	rm -f

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)