#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cop)
{
    brain = new Brain(*cop.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &oth)
{
    if (this != &oth)
        Animal::operator=(oth);
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat Sound" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}