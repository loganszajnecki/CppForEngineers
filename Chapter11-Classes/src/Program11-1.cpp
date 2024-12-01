#include "Complex.h"

int main() {
    Complex a, b, c(6.8, 9.7); // three objects of the Complex class
    b.assignNewValues(5.3, -8.4);
    a.showComplexValues();
    b.showComplexValues();
    c.showComplexValues();
    
    return 0;
}