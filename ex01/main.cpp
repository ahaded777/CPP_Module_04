#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

    // Dog a;
    // Dog b;

    // a.
    const int SIZE = 6;
    Animal* animals[SIZE];

    for (int i = 0; i < SIZE / 2; i++)
        animals[i] = new Dog();
    for (int i = SIZE / 2; i < SIZE; i++)
        animals[i] = new Cat();
    for (int i = 0; i < SIZE; i++)
        animals[i]->makeSound();
    for (int i = 0; i < SIZE; ++i)
            delete animals[i];

    return 0;
}