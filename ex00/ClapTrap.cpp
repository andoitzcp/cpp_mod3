#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): _name("ClapTrap"),
                          _hitPoints(10),
                          _energyPoints(10),
                          _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(const std::string name): _name(name),
                          _hitPoints(10),
                          _energyPoints(10),
                          _attackDamage(0)
{
    std::cout << "Custom constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name),
                                           _hitPoints(other._hitPoints),
                                           _energyPoints(other._energyPoints),
                                           _attackDamage(other._attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Overload = operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Claptrap " << this->_name << " is already dead!" << std::endl;
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "Claptrap " << this->_name << " is OOM!" << std::endl;
        return ;
    }
    std::cout << "Claptrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Claptrap " << this->_name << " is already dead!" << std::endl;
        return ;
    }
    std::cout << "Claptrap " << this->_name << " takes " << amount
        << " points of damage!" << std::endl;
    if (amount >= static_cast<unsigned int>(this->_hitPoints))
    {
        this->_hitPoints = 0;
        std::cout << "Claptrap " << this->_name << " dies!" << std::endl;
    }
    else
        this->_hitPoints -= amount;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Claptrap " << this->_name << " is already dead!" << std::endl;
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "Claptrap " << this->_name << " is OOM!" << std::endl;
        return ;
    }
    std::cout << "Claptrap " << this->_name << " repairs itself by " << amount
        << " amount of points!" << std::endl;
    this->_hitPoints += amount;
    if (this->_hitPoints > 10)
    {
        std::cout << "Claptrap " << this->_name << " has already full health!" << std::endl;
        if (this->_hitPoints - 10 > 0)
        {
            std::cout << "Claptrap " << this->_name << " can't repair itself over 10 points, "
                      << this->_hitPoints - 10 << " were lost!" << std::endl;
        }
        this->_hitPoints = 10;
    }
    this->_energyPoints--;
    return ;
}
