#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// extern bool debug = 0;

class ClapTrap{

    protected:
        std::string Name;
        int HP;
        int EP;
        int AD;
    public:
        ClapTrap();
        ClapTrap(std::string newName);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};





#endif
