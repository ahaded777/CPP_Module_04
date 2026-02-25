#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        void    makeSound(void) const;
        Cat& operator=(const Cat &oth);
        Cat();
        ~Cat();
};

#endif