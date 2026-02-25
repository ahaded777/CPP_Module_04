#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &cop)
{
    brain = new Brain(*cop.brain);
    std::cout << "Dog copy constructor called" << std::endl;
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
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}