// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4

int main(){
    const size_t LEVEL_COUNT = 4;
    int enemies[LEVEL_COUNT];
    float difficulties[] = {1.0, 3.5, 6.0, 10.5};

    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 15;

    std::cout << "The game has " << LEVEL_COUNT << " levels:" << std::endl;
    std::cout << "Level 1: " << enemies[0] << " enemies" << std::endl;
    std::cout << "Level 2: " << enemies[1] << " enemies" << std::endl;
    std::cout << "Level 3: " << enemies[2] << " enemies" << std::endl;
    std::cout << "Level 4: " << enemies[3] << " enemies" << std::endl;

    std::cout << std::endl;

    std::cout << "Level difficulties are set as follows:" << std::endl;
    std::cout << "Level 1: " << difficulties[0] << std::endl;
    std::cout << "Level 2: " << difficulties[1] << std::endl;
    std::cout << "Level 3: " << difficulties[2] << std::endl;
    std::cout << "Level 4: " << difficulties[3] << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
