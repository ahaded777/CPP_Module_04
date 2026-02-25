#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &oth)
{
    if (this != &oth)
        WrongAnimal::operator=(oth);
    std::cout << "WrongCat assignment operator called" << std::endl;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Sound" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}