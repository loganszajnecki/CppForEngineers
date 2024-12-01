// Volume of a cylinder
#include <iostream>

int main() {
    double radius, height, pi, volume;
    pi = 3.14159265;
    radius = 2.5;
    height = 16.0;
    volume = pi * radius * radius * height;
    std::cout << "Volume of the cylinder is: " << volume << std::endl;

    return 0;
}