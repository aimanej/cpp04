Srcs = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

Header = Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

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