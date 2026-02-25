#include "Character.hpp"

Character::Character()
{
    this->name = "NO NAME";
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string const &name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
    this->name = copy.name;
    for (int i = 0; i < 4; i++)
    {
        if (copy.inventory[i])
            this->inventory[i] = copy.inventory[i]->clone();
    }
}

Character &Character::operator=(const Character &oth)
{
    if (this != &oth)
    {
        this->name = oth.name;
        for (int i = 0; i < 4; i++)
        {
            delete this->inventory[i];
            if (oth.inventory[i])
                this->inventory[i] = oth.inventory[i]->clone();
        }
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return ;
        }   
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->inventory[idx])
        this->inventory[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete (inventory[i]);
    }
}