#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cmath>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *lslot[4];
    public:
        void learnMateria(AMateria *param);
        AMateria* createMateria(std::string const &type);
        MateriaSource();
        void getType();
        MateriaSource& operator=(const MateriaSource& oth);
        MateriaSource(const MateriaSource &copy);
        ~MateriaSource();
};


#endif