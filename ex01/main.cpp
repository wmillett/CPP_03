#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
# define true 1
# define false 0




int main(){

    // ClapTrap a("Carl");
    ScavTrap a("Roger");
    ScavTrap b("Bob");

    //Test HP
    // a.attack("Roger");
    // a.takeDamage(10);
    // a.attack("Roger");
    //Test EP
    for(int i = 0; i < 52; i++){
        b.attack("a");
    }
    a.guardGate();
    

}
