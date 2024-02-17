#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap(){
   std::cout << "Frag default constructor called" << std::endl;
    Name = "No name";
    HP = 100;
    EP = 100;
    AD = 30;

};

FragTrap::FragTrap(std::string newName) : ClapTrap(newName) {
    std::cout << "Frag default constructor with parameter called" << std::endl;
    Name = newName;
    HP = 100;
    EP = 100;
    AD = 30;
};

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other){
    std::cout << "Frag copy constructor called" << std::endl;
    *this = other;
};

FragTrap& FragTrap::operator=(const FragTrap& other){

    std::cout << "Frag copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
};

FragTrap::~FragTrap(){
    std::cout << "Frag destructor called" << std::endl;
};

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->Name << " asks you for a high five" << std::endl;
};

void FragTrap::attack(const std::string& target){
    if (this->EP <= 0 || this->HP <= 0){
        if (this->HP <= 0 && this->EP <= 0)
            std::cout << "FragTrap " << this->Name << " is out of HP and EP!!!" << std::endl;
        else if (this->HP <= 0)
            std::cout << "FragTrap " << this->Name << " is out of HP!" << std::endl;
        else
            std::cout << "FragTrap " << this->Name << " is out of EP!" << std::endl;
    }
    else{
        std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl;
        this->EP--;
    }
};
