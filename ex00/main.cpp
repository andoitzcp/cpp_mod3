#include "ClapTrap.hpp"

int main(void)
{
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

    return 0;
}
