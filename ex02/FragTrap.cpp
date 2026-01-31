#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void): ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_name = "FragTrap3000";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
    std::cout << "FlagTrap (" << this->_name << ") constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    return ;
}

FragTrap FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap overload = operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_name = other._name;    
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap (" << this->_name  << ") destructor called" << std::endl;
    return ;
}

void FragTrap::higFiveGuys(void) const
{
    std::cout << "FragTrap " << this->_name << ": Give me a High Five!" << std::endl;
    return ;
}
