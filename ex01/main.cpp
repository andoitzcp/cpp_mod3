#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << "== TEST CLAPTRAP ==\n" << std::endl;
        ClapTrap foo;
        ClapTrap bar("bar");

        for (int i = 0; i < 12; i++)
        {
            foo.attack("bar");
        }
        ClapTrap fooCopy(foo);
        fooCopy.attack("foo");
        foo.beRepaired(1000);
        foo.takeDamage(1000);

        bar.takeDamage(9);
        bar.beRepaired(2);
        bar.beRepaired(9);
        bar.takeDamage(9);
        bar.takeDamage(1);

        ClapTrap barEqual = bar;
        barEqual.takeDamage(1);
    }
    {
        std::cout << "\n\n== TEST SCAVTRAP ==\n" << std::endl;
        ScavTrap foo;
        ScavTrap bar("bar");
        
        for (int i = 0; i < 52; i++)
        {
            foo.attack("bar");
        }
        ScavTrap fooCopy(foo);
        fooCopy.attack("foo");
        foo.beRepaired(1000);
        foo.takeDamage(1000);
        
        bar.takeDamage(9);
        bar.beRepaired(2);
        bar.beRepaired(9);
        bar.takeDamage(9);
        bar.takeDamage(1);
        
        ScavTrap barEqual = bar;
        barEqual = bar;
        barEqual.takeDamage(1);
        
        ScavTrap guard;
        guard.guardGate();
        guard.guardGate();
    }
    return 0;
}
