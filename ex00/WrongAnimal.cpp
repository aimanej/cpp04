#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default constructor called" << std::endl;
    _type = "HUMAN";
}

WrongAnimal::WrongAnimal(const std::string name)
{
    std::cout << "Param  constructor called" << std::endl;
    _type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "copy constructor called" << std::endl;
    this->_type = obj._type;   
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "copy assignment op called " << std::endl;
    if(this != &obj)
    {
        this->_type = obj._type;
    }
    return *this;
}

void WrongAnimal::makeSound() const 
{
    std::cout << "Human talks" << std::endl;
}

const std::string WrongAnimal::getType() const
{
    return _type;
}