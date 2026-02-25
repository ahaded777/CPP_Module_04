#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &oth)
{
    if (this != &oth)
        this->type = oth.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal Sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}