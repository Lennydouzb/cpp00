CXX=c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = phonebook
SRC_DIR = srcs/
SRCS = $(SRC_DIR)main.cpp \
	   $(SRC_DIR)model/Contact.cpp \
	   $(SRC_DIR)model/PhoneBook.cpp

OBJ_DIR = .build/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
