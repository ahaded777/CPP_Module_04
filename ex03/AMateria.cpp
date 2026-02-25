#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria& AMateria::operator=(const AMateria &oth)
{
    if (this != &oth)
        this->type = oth.getType();
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::~AMateria()
{
}