#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &oth)
{
    if (this != &oth)
        Animal::operator=(oth);
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog Sound" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}