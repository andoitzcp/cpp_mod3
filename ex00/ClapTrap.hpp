#ifndef CLAPTRAP_H_
#define CLAPTRAP_H_

#include <string>

class ClapTrap
{
    public:
        // Constructors & Destructors
        ClapTrap(void);
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap(void);

        // Member functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};


#endif // CLAPTRAP_H_
