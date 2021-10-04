#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main() {
    FragTrap	fragTrap("Денчик");
    ScavTrap	scavTrap("Кирчик");
    NinjaTrap   ninjaTrap("Япошка");
    ClapTrap    test("Данил");
    SuperTrap   super("HALK");

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
    fragTrap.takeDamage(20);
    std::cout << std::endl;

    ninjaTrap.meleeAttack("Lage");
    ninjaTrap.takeDamage(20);
    ninjaTrap.takeDamage(30);
    ninjaTrap.beRepaired(50);
    ninjaTrap.beRepaired(200);
    ninjaTrap.takeDamage(300);
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
    scavTrap.takeDamage(10);


    std::cout << std::endl;
    super.meleeAttack("Betmen");
    super.takeDamage(20);
    super.takeDamage(42);
    super.beRepaired(20);
    super.beRepaired(200);
    super.takeDamage(10);


    std::cout << std::endl;
    ninjaTrap.ninjaShoebox(fragTrap);
    ninjaTrap.ninjaShoebox(scavTrap);
    ninjaTrap.ninjaShoebox(test);
}
