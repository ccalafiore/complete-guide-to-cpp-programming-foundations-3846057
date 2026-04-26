// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    
    bool flag;

    flag = false;

    a = 7;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << flag << std::endl;
    std::cout << std::endl;

    flag = true;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    std::cout << "flag = " << flag << std::endl;
    std::cout << std::endl;

    unsigned int pos = b - a;

    std::cout << "pos (unsigned) = b - a = " << pos << std::endl;

    std::cout << std::endl;

    return 0;
}
