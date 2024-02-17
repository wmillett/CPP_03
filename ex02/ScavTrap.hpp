#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
// extern bool debug = 0;

class ScavTrap : public ClapTrap{

    public:
        ScavTrap();
        ScavTrap(std::string newName);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};





#endif
