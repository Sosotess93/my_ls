##
## Makefile for Makefile in /home/charra_s/PSU_2014_my_ls
## 
## Made by Sofiane Charrad
## Login   <charra_s@epitech.net>
## 
## Started on  Tue Nov 25 18:51:35 2014 Sofiane Charrad
## Last update Sun Nov 30 23:31:12 2014 Sofiane Charrad
##

CC	=	gcc

RM	=	rm -f

##CFLAGS	+=	-g3 -I./ -Werror -Wextra -pedantic -ansi -Wall

NAME	=	my_ls

SRC	=	my_putchar.c \
		my_putstr.c \
		my_put_nbr.c \
		files_rights.c \
		aff_date_heure.c \
		size.c \
		bit.c \
		d_opt.c \
		my_ls_a.c \
		my_ls_basique.c \
		grp_user.c \
		my_ls_l.c \
		my_strcmp.c \
		main.c 

OBJ	=	$(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all	: $(NAME) clean

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
