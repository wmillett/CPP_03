#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
// extern bool debug = 0;

class FragTrap : public ClapTrap{

    private:
        std::string Name;
        int HP;
        int EP;
        int AD;
    public:
        FragTrap();
        FragTrap(std::string newName);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys(void);
};





#endif
