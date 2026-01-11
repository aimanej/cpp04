#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const std::string name);
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    void makeSound() const;
    const std::string getType() const;
};

#endif