#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        void    makeSound(void) const;
        Dog& operator=(const Dog &oth);
        Dog();
        ~Dog();
};

#endif