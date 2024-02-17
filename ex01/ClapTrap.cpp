#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("No name"), HP(10), EP(10), AD(0) {
    std::cout << "Clap default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string newName) : Name(newName), HP(10), EP(10), AD(0) {
    std::cout << "Clap default constructor with parameter called" << std::endl;

};

ClapTrap::ClapTrap(const ClapTrap& other){
    std::cout << "Clap copy constructor called" << std::endl;
    *this = other;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& other){

    std::cout << "Clap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->Name = other.Name;
        this->HP = other.HP;
        this->EP = other.EP;
        this->AD = other.AD;
    }
    return *this;
};

ClapTrap::~ClapTrap(){
    std::cout << "Clap destructor called" << std::endl;
};


void ClapTrap::attack(const std::string& target){
    if (this->EP <= 0 || this->HP <= 0){
        if (this->HP <= 0 && this->EP <= 0)
            std::cout << "ClapTrap " << this->Name << " is out of HP and EP!!!" << std::endl;
        else if (this->HP <= 0)
            std::cout << "ClapTrap " << this->Name << " is out of HP!" << std::endl;
        else
            std::cout << "ClapTrap " << this->Name << " is out of EP!" << std::endl;
    }
    else{
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl;
        this->EP--;
    }
};

void ClapTrap::takeDamage(unsigned int amount){
        if (this->HP > 0){
            this->HP -= amount;
            std::cout << "ClapTrap " << this->Name << " takes " << amount << " of damage" << std::endl;
        }
        else
            std::cout << "ClapTrap " << this->Name << " is already down" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount){
    if (this->EP <= 0 || this->HP <= 0){
        if (this->HP <= 0 && this->EP <= 0)
            std::cout << "ClapTrap " << this->Name << " is out of HP and EP!!!" << std::endl;
        else if (this->HP <= 0)
            std::cout << "ClapTrap " << this->Name << " is out of HP!" << std::endl;
        else
            std::cout << "ClapTrap " << this->Name << " is out of EP!" << std::endl;
    }
    else{
        std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points of HP"<< std::endl;
        this->EP--;
    }
};
