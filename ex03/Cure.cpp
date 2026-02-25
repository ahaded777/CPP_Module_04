#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
}

Cure &Cure::operator=(const Cure &oth)
{
    if (this != &oth)
        this->type = oth.getType();
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
}

Cure::~Cure()
{
}