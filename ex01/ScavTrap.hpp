#ifndef SCAVTRAP_H_
#define SCAVTRAP_H_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap(void);

        void attack(const std::string& target);
        void guardGate(void);

    private:
        bool _isGuardingGate;

    
};


#endif // SCAVTRAP_H_
