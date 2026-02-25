#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *brain;
    public:
        void    makeSound(void) const;
        Dog();
        Dog& operator=(const Dog &oth);
        Dog(const Dog &cop);
        ~Dog();
};

#endif