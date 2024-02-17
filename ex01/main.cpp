#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
# define true 1
# define false 0

int main(){

    // ClapTrap a("Carl");
    ScavTrap a("Roger");
    ScavTrap b("Bob");
    ScavTrap c ("Lili");
    //Test HP
    // a.attack("Roger");
    // a.takeDamage(10);
    // a.attack("Roger");
    //Test EP
    for(int i = 0; i < 52; i++){
        b.attack("Sigmund");
    }
    a.guardGate();
    c.takeDamage(345);
    c.attack("Charlie");

}
