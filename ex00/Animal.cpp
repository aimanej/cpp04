#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default constructor called" << std::endl;
    _type = "HUMAN";
}

Animal::Animal(const std::string name)
{
    std::cout << "Param  constructor called" << std::endl;
    _type = name;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "copy constructor called" << std::endl;
    this->_type = obj._type;   
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "copy assignment op called " << std::endl;
    if(this != &obj)
    {
        this->_type = obj._type;
    }
    return *this;
}

void Animal::makeSound() const 
{
    std::cout << "Human talks" << std::endl;
}

const std::string Animal::getType() const
{
    return _type;
}