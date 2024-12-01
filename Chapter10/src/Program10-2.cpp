#include <iostream>

using namespace std;

int main() {
    int *numAddr;       // declare a pointer to an integer
    int miles, dist;    // declare two integer variables

    dist = 158;         // store the number 158 in dist
    miles = 22;         // store the number 22 in miles
    numAddr = &miles;   // store the address of miles in numAddr

    cout << "The address stored in numAddr is: " << numAddr << endl;
    cout << "The value pointed to by numAddr is: " << *numAddr << "\n\n";

    numAddr = &dist; // now store the address of dist in numAddr
    cout << "The address now stored in numAddr is: " << numAddr << endl;
    cout << "The value pointed to by numAddr is now: " << *numAddr << endl;

    return 0;
}