#ifndef __PLAYER
#define __PLAYER
#include <string>
class Player {
    private:
        std::string name;

    public:
        Player(const char*);
        void display();
};

#endif