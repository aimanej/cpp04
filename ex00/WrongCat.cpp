#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const std::string tp) : WrongAnimal(tp)
{
    std::cout << "WrongCat Param  constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat copy assignment op called " << std::endl;
    if(this != &obj)
    {
        WrongAnimal::operator=(obj);
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Meows!" << std::endl;
}

const std::string WrongCat::getType() const
{
    return _type;
}
