#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *brain;
    public:
        Cat();
        void    makeSound(void) const;
        Cat(const Cat &cop);
        Cat& operator=(const Cat &oth);
        ~Cat();
};

#endif