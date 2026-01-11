#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "DOG";
    _brn = new Brain();
}

Dog::Dog(const std::string tp) : Animal(tp)
{
    std::cout << "Dog Param  constructor called" << std::endl;
    _brn = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _brn = new Brain(*obj._brn);
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog copy assignment op called " << std::endl;
    if(this != &obj)
    {
        Animal::operator=(obj);
        delete _brn;

        _brn = new Brain(*obj._brn);
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

Dog::~Dog()
{
    std::cout << "Dog Deconstructor called" << std::endl;
    delete _brn;
}
