#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
# define true 1
# define false 0




int main(){

    // ClapTrap a("Carl");
    FragTrap a("Greg");
    FragTrap b("Julia");

    //Test attack
    for(int i = 0; i < 102; i++){
        b.attack("Justin");
    }
    a.highFivesGuys();
    
}
