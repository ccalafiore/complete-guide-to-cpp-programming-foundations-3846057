// Complete Guide to C++ Programming Foundations
// Exercise 05_08
// Ranged For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){

    using type_x = int;

    std::vector<type_x> lapTimes = {92, 85, 88, 90, 87};
    float average;

    average = 0.0f;

    // "int &x" makes a pointer of each element of lapTimes. Instead, "int x" makes a copy of each element.
    for (type_x &x : lapTimes) {
        average += x;
    }
    average /= lapTimes.size();
    std::cout << "Average Lap Time: " << average << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}