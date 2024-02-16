#include "ClapTrap.hpp"

# define true 1
# define false 0




int main(){

    ClapTrap a("Carl");
    ClapTrap b("Bob");

    //Test HP
    a.attack("Roger");
    a.takeDamage(10);
    a.attack("Roger");
    //Test EP
    b.takeDamage(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.beRepaired(1);
    b.attack("Roger");



}
