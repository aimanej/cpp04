#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); 
// j->makeSound();
// meta->makeSound();

// delete meta;
// delete j;
// delete i;

const WrongAnimal *test = new WrongAnimal();
const WrongAnimal *test2 = new WrongCat;

std::cout << test->getType() << " " << std::endl;
std::cout << test2->getType() << " " << std::endl;
test->makeSound(); //will output the cat sound!
test2->makeSound();

delete test;
delete test2;

return 0;
}