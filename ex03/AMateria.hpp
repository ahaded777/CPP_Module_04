#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cmath>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(const AMateria &copy);
        AMateria(std::string const &type);
        AMateria& operator=(const AMateria &oth);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
};

#endif