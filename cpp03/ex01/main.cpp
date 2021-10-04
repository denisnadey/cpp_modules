#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap	fragTrap("deniska");
    ScavTrap	trap("kirchik");

    srand(time(NULL));
    fragTrap.vaulthunter_dot_exe("Kiborg 3000");
    fragTrap.vaulthunter_dot_exe("TERMINATOR");
    fragTrap.vaulthunter_dot_exe("HMICKEY");
    fragTrap.vaulthunter_dot_exe("MDENYS");
    fragTrap.vaulthunter_dot_exe("HARISTOT");
    fragTrap.vaulthunter_dot_exe("ENENA");

    std::cout << std::endl;

    fragTrap.takeDamage(12);
    fragTrap.takeDamage(44);
    fragTrap.takeDamage(23);
    fragTrap.beRepaired(10);
    fragTrap.beRepaired(11);
    fragTrap.takeDamage(23);

    std::cout << std::endl;

    trap.challengeNewcomer();
    trap.challengeNewcomer();
    trap.challengeNewcomer();
    trap.challengeNewcomer();
    trap.challengeNewcomer();

    std::cout << std::endl;

    trap.takeDamage(12);
    trap.takeDamage(44);
    trap.takeDamage(23);
    trap.beRepaired(10);
    trap.beRepaired(11);
    trap.takeDamage(23);



}