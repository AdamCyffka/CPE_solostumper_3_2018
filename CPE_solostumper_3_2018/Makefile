##
## EPITECH PROJECT, 2019
## makefile
## File description:
## solotumper makefile
##

NAME	  =	fuzzbozz

SRC		  =	./src/main.c	    		\
			    ./src/error.c		    	\
			    ./src/useful.c		  	\
			    ./src/main_program.c	\

OBJ		  =	$(SRC:.c=.o)

all		  :	$(NAME)

$(NAME)	: $(OBJ)
	  		  gcc -o $(NAME) $(OBJ) -Iinclude

clean	  :
	  		  rm -f $(OBJ)

fclean	:	clean
			    rm -f $(NAME)
			    rm *~ -f $(NAME)
			    rm *# -f $(NAME)

re		  :	fclean all

.PHONY	:	all clean fclean re
