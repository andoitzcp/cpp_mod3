#include "ScavTrap.hpp"

int main(void)
{
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
    barEqual.takeDamage(1);

    ScavTrap guard;
    guard.guardGate();
    guard.guardGate();

    return 0;
}
