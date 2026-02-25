#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* i = new Cat();
    const Animal* d = new Dog();
    const WrongAnimal* j = new WrongCat();
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << d->getType() << " " << std::endl;
    // std::cout << j->getType() << " " << std::endl;
    i->makeSound();
    d->makeSound();
    j->makeSound();

    delete i;
    delete d;
    delete j;

    return 0;
}