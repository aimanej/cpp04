#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const std::string tp) : Animal(tp)
{
    std::cout << "Cat Param  constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat copy assignment op called " << std::endl;
    if(this != &obj)
    {
        Animal::operator=(obj);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat Meows!" << std::endl;
}

const std::string Cat::getType() const
{
    return _type;
}
