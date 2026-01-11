#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const std::string name)
{
    std::cout << "Brain parametric constructor called" << std::endl;
    (void)name;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}


Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}