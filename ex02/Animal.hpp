#ifndef ANIMAL
#define ANIMAL

#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cmath>

class Animal
{
    protected:
        std::string type;
    public:
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
        Animal();
        Animal& operator=(const Animal &oth);
        virtual ~Animal();
};

#endif