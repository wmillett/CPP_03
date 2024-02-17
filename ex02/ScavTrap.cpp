#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap(){
   std::cout << "Scav default constructor called" << std::endl;
    this->Name = "No name";
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;

};

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName) {
    std::cout << "Scav default constructor with parameter called" << std::endl;
    this->Name = newName;
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;
};

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other){
    std::cout << "Scav copy constructor called" << std::endl;
    *this = other;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& other){

    std::cout << "Scav copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
};

ScavTrap::~ScavTrap(){
    std::cout << "Scav destructor called" << std::endl;
};

void ScavTrap:: guardGate(){
    if (this->HP > 0)
        std::cout << "ScavTrap " << this->Name << " is not in Gate keeper mode" << std::endl;
    else
        std::cout << "ScavTrap " << this->Name << " cannot be in Gate keeper mode" << std::endl;
};

void ScavTrap::attack(const std::string& target){
    if (this->EP <= 0 || this->HP <= 0){
        if (this->HP <= 0 && this->EP <= 0)
            std::cout << "ScavTrap " << this->Name << " is out of HP and EP!!!" << std::endl;
        else if (this->HP <= 0)
            std::cout << "ScavTrap " << this->Name << " is out of HP!" << std::endl;
        else
            std::cout << "ScavTrap " << this->Name << " is out of EP!" << std::endl;
    }
    else{
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl;
        this->EP--;
    }
};