#ifndef __WEAPON
#define __WEAPON
#include <iostream>
class Weapon {
    private:
        std::string name;
        double AttackPower;

    public:
        Weapon(const char*, double);
        void display();
};

#endif