#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const std::string name);
    WrongCat(const WrongCat &obj);
    WrongCat &operator=(const WrongCat &obj);
    void makeSound() const;
    const std::string getType() const;
    ~WrongCat();
};

#endif