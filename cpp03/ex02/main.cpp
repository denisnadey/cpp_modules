#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap	fragTrap("Денчик");
    ScavTrap	scavTrap("Кирчик");

    srand(time(NULL));
    fragTrap.vaulthunter_dot_exe("Maugli");
    fragTrap.vaulthunter_dot_exe("Darli");
    fragTrap.vaulthunter_dot_exe("Karli");
    fragTrap.vaulthunter_dot_exe("Stenli");
    fragTrap.vaulthunter_dot_exe("Scoobe do be doo");
    std::cout << std::endl;
    fragTrap.meleeAttack("Lage");
    fragTrap.takeDamage(20);
    fragTrap.takeDamage(30);
    fragTrap.beRepaired(50);
    fragTrap.beRepaired(200);
    fragTrap.takeDamage(300);
    std::cout << std::endl;
    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
    std::cout << std::endl;
    scavTrap.meleeAttack("Kage");
    scavTrap.takeDamage(20);
    scavTrap.takeDamage(42);
    scavTrap.beRepaired(20);
    scavTrap.beRepaired(200);
    scavTrap.takeDamage(200);
}
