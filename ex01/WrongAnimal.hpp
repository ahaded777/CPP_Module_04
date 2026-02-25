#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cmath>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        std::string getType(void) const;
        void makeSound(void) const;
        WrongAnimal& operator=(const WrongAnimal &oth);
        WrongAnimal();
        ~WrongAnimal();
};

#endif