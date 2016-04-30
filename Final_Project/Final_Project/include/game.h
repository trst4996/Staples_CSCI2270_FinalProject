#ifndef GAME_H
#define GAME_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct listname{
    std::string name;
    std::string how;
    listname *next;
    listname *previous;
    listname(){};
    listname(std::string in_name, std::string in_how, listname *initnext, listname *initprevious)
    {
        name=in_name;
        how=in_how;
        next=initnext;
        previous=initprevious;
    }
};

class game
{
    public:
        game();
        ~game();
        void Thefallen(std::string name, std::string how);
        void TheGods(std::string name, std::string how);
        int hashsumspell(std::string spell);
        void printThefallen();
        void printthegods();
        int zero_one();
        int monsterHP();
    protected:
    private:
        listname *headfallen;
        listname *headgod;
        int test=0;
        int godanswer=42;
        int test2=0;

};

#endif // GAME_H
