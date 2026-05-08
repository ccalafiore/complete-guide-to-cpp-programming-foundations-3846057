// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};

enum class menu_section {background, music, sound, controls, texture};


int main(){

    int sound = 8;

    asset_type asset_value;

    asset_value = asset_type::sound;

    menu_section menu_section_value;

    menu_section_value = menu_section::sound;

    std::cout << "sound = " << sound << std::endl << std::endl;

    std::cout << "asset_value = " << (int) asset_value << std::endl << std::endl;

    std::cout << "menu_section_value = " << (int) menu_section_value << std::endl << std::endl;

    std::cout << std::endl << std::endl;

    return 0;
}
