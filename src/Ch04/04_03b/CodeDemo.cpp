// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int *scorePtr = highScores;   // Pointer initialized to the address of the array

    std::cout << "Initial high score using pointer: " << *scorePtr << std::endl;  // Display the first high score using pointer

    std::cout << "Second high score using pointer: " << *(scorePtr + 2) << std::endl;  // Display the second high score using pointer

    std::cout << "Third high score using array notation: " << scorePtr[3] << std::endl;  // Display the third high score using array notation

    std::cout << std::endl << std::endl;
    return 0;
}
