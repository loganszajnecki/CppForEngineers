#include <iostream>
#include "Complex.h"

Complex::Complex(double real, double imag)
{
    realPart = real;
    imaginaryPart = imag;
}

void Complex::assignNewValues(double real, double imag)
{
    realPart = real;
    imaginaryPart = imag;
}

void Complex::showComplexValues()
{
    char sign = '+';
    if (imaginaryPart < 0) {
        sign = '-';
    }
    std::cout << "The complex number is: "
              << realPart << ' ' << sign << ' ' << std::abs(imaginaryPart) << "i\n";
}

