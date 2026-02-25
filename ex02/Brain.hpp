#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string brain[100];
    public:
        Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &src);
        ~Brain();
};

#endif