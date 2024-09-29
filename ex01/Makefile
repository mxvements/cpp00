NAME=	phonebook
CC=		clang++
FLAGS=	-Werror -Wextra -Wall -std=c++98

#files
FILES=		main.cpp \
			Contact.cpp \
			PhoneBook.cpp
OBJ_PATH=	obj/
OBJ=		$(FILES:%.cpp=$(OBJ_PATH)%.o)

#rule
all: $(NAME)

#rule to compille $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

#rule to create $(OBJ_PATH)
$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean
