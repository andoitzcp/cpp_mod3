#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap(), _isGuardingGate(false)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_name = "ScavTrap2000";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return ;
}


ScavTrap::ScavTrap(const std::string name): ClapTrap(name), _isGuardingGate(false)
{
    std::cout << "ScavTrap (" << this->_name << ") constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other), _isGuardingGate(other._isGuardingGate)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    this->_isGuardingGate = other._isGuardingGate;
    std::cout << "ScavTrap overload = operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap (" << this->_name  << ") destructor called" << std::endl;
    return ;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Scavtrap " << this->_name << " is already dead!" << std::endl;
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "Scavtrap " << this->_name << " is OOM!" << std::endl;
        return ;
    }
    std::cout << "Scavtrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
    return ;
}

void ScavTrap::guardGate(void)
{
    if (this->_isGuardingGate == true)
    {
        std::cout << "Scavtrap " << this->_name << " is already guarding the gate." << std::endl;
        return ;
    }
    this->_isGuardingGate = true;
    std::cout << "Scavtrap " << this->_name << " is now guarding the gate." << std::endl;
    return ;
}
