// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){

    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(4.2, 1.7));
    points.push_back(std::complex<double>(7.2, 4.8));
    points.push_back(std::complex<double>(3.5, 6.3));
    points.push_back(std::complex<double>(0.1, 3.9));

    std::cout << "First real part: " << points.begin() -> real() << std::endl;

    std::cout << "Immaginary part at index 1: " << points[1].imag() << std::endl;

    std::cout << "Real part at the next to last element: " << prev(points.end(), 2)->real() << std::endl;

    std::cout << "Last imaginary part: " << (points.end() - 1) -> imag() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
