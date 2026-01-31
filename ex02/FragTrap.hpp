#ifndef FRAGTRAP_H_
#define FRAGTRAP_H_

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(const FragTrap& other);
        FragTrap operator=(const FragTrap& other);
        ~FragTrap(void);

        void higFiveGuys(void) const;
};


#endif // FRAGTRAP_H_
