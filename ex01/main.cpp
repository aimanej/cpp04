#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int t = 10;
    Animal *arr[10];

    for(int i = 0; i < t ; i++)
    {
        if(i < (t / 2))
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }

    for(int i = 0; i < t; i++)
        delete arr[i];
}