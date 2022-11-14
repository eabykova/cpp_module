NAME 	= 	harlFilter
SRC 	= 	main.cpp Harl.cpp
OBJ 	= 	$(SRC:.cpp=.o)

FLAG	=	-Wall -Wextra -Werror -std=c++98
CXX		=	clang++
RM 		= 	rm -f

$(NAME)	:	$(OBJ) Makefile
			$(CXX) $(FLAG) $(OBJ) -o $(NAME)
			@echo "✅	Ready. Enjoy     ✅ "

PHONY	:	all clean fclean re

all		:	$(NAME)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all