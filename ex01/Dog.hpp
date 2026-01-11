#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_brn;
public:
    Dog();
    Dog(const std::string name);
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    void makeSound() const;
    const std::string getType() const;
    ~Dog();
};

#endif