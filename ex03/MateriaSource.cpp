#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0;i < 4;i++)
        this->lslot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0;i < 4;i++)
    {
        if (this->lslot[i])
            this->lslot[i] = copy.lslot[i]->clone();
        else
            this->lslot[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& oth)
{
    if (this != &oth)
    {
        for (int i = 0;i < 4;i++)
        {
            if (oth.lslot[i])
                this->lslot[i] = oth.lslot[i]->clone();
        }
    }
    return (*this);
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0;i < 4;i++)
    {
        if (this->lslot[i] && this->lslot[i]->getType() == type)
            return (this->lslot[i]->clone());
    }
    return (NULL);
}

void MateriaSource::learnMateria(AMateria *param)
{
    if (!param)
        return ;
    for (int i = 0;i < 4;i++)
    {
        if (this->lslot[i] == NULL)
        {
            this->lslot[i] = param->clone();
            return ;
        }
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0;i < 4;i++)
    {
        if (this->lslot[i])
        {
            delete this->lslot[i];
            this->lslot[i] = NULL;
        }
    }
    
}