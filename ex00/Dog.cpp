#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "DOG";
}

Dog::Dog(const std::string tp) : Animal(tp)
{
    std::cout << "Dog Param  constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog copy assignment op called " << std::endl;
    if(this != &obj)
    {
        Animal::operator=(obj);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog Bark !" << std::endl;
}

const std::string Dog::getType() const
{
    return _type;
}
