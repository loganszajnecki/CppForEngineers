/************************************************************************ 
This program combines the learning of Chapter 02 into an applied problem.

Problem statement: A highway-patrol speed-detection radar emits a beam of 
microwaves at a frequency designated as fe. The beam is reflected off an 
approaching car, and the radar unit picks up and analyzes the reflected beam’s 
frequency, fr. The reflected beam’s frequency is shifted slightly from fe to fr 
because of the car’s motion. The relationship between the speed of the car, v, in
miles per hour (mph), and the two microwave frequencies is

v = (6.685 * 10^8) * ( (fr - fe) / (fr+fe) ) mph 

where the emitted waves have a frequency of fe = 2 × 10^10 sec-1. Using the given formula,
you’ll write a C++ program, using the software development procedure, to calculate and dis-
play the speed corresponding to a received frequency of 2.000004 × 10^10 sec-1. 
************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double speed, fe, fr;

    fe = 2e10;
    fr = 2.0000004e10;

    speed = (6.685e8) * (fr - fe) / (fr + fe);
    cout << "The speed is: " << speed << " mph " << endl;

    return 0;
}