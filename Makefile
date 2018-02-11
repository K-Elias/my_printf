##
## Makefile for makefile in /home/abouss_e/rendu/PSU_2015_my_printf
##
## Made by elias aboussair
## Login   <abouss_e@epitech.net>
##
## Started on  Sun Apr 17 19:05:17 2016 elias aboussair
## Last update Sun Apr 17 23:30:13 2016 elias aboussair
##

POINT_C	= my_put_binary_nbr.c \
	  my_putchar.c \
	  my_putchar_mod.c \
	  my_put_hexmaj_nbr.c \
	  my_put_hex_nbr.c \
	  my_put_nbr.c \
	  my_put_neg.c \
	  my_put_oct_nbr.c \
	  my_put_oct_nbr_spe.c \
	  my_put_oct_nbr_spe_va.c \
	  my_put_pos.c \
	  my_put_pos_va.c \
	  my_put_ptr.c \
	  my_put_ptr_va.c \
	  my_putstr.c \
	  my_put_va2.c \
	  my_put_va.c \
	  epur_sp.c \
	  my_printf.c \

RM	= rm -rf

OBJS	= $(POINT_C:.c=.o)

NAME	= libmy.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
