// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    
    std::string name;

    std::cout << "Please, enter your name: " << std::flush;

    std::cin >> name;

    std::cout << "Hi " << name << "! How are you today?" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}