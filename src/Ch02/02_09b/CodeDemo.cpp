// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role { protagonist, antagonist, sidekick, npc, unkown };

struct game_character
{
    std::string name = "";
    int level = -1;
    character_role role = character_role::unkown;
};

int main(){

    game_character buddy;
    
    buddy.name = "Tony";
    buddy.level = 11;
    buddy.role = character_role::sidekick;

    std::cout << buddy.name << " is a character with role id " << (int) buddy.role << " at level " << buddy.level << std::endl;


    std::cout << std::endl << std::endl;

    return 0;
}
