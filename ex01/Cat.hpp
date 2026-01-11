#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_brn;
public:
    Cat();
    Cat(const std::string name);
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    void makeSound() const;
    const std::string getType() const;
    ~Cat();
};

#endif