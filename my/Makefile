##
## Makefile for cc_libmy in /home/kapand_v//Taff/piscine/Jour_11
## 
## Made by victor kapandji
## Login   <kapand_v@epitech.net>
## 
## Started on  Mon Mar 26 10:01:18 2012 victor kapandji
## Last update Wed May 23 12:06:25 2012 victor kapandji
##

SRC=	my_putchar.c \
	my_isneg.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_sort_int_tab.c \
	my_power_rec.c \
	my_square_root.c \
	my_is_prime.c \
	my_find_prime_sup.c \
	my_strcpy.c \
	my_strncpy.c \
	my_revstr.c \
	my_strstr.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strupcase.c \
	my_strlowcase.c \
	my_strcapitalize.c \
	my_str_isalpha.c \
	my_str_isnum.c \
	my_str_islower.c \
	my_str_isupper.c \
	my_str_isprintable.c \
	my_showstr.c \
	my_showmem.c \
	my_strcat.c \
	my_strncat.c \
	my_strlcat.c \
	my_putnbr_base.c \
	my_printf.c \
        function_2.c \
        function.c \
        my_putnbr_base.c

OBJ=	$(SRC:.c=.o)

NAME=	libmy.a

RM= rm -f

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp my.h ../
	cp libmy.a ../

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)