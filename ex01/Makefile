Srcs = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

Header = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

Flags = c++ -Wall -Werror -Wextra -std=c++98

Name = pigs

all: $(Name)

$(Name): $(Srcs) $(Header)
	$(Flags) $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.PHONY:re all clean fclean