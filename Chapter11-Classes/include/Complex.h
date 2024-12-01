// class declaration 
class Complex 
{
    private:
        double realPart;      // data member
        double imaginaryPart; // data member
    public:
        Complex(double = 0.0, double = 0.0);  // Constructor
        void assignNewValues(double, double); // member function
        void showComplexValues();             // member function
}; // End of class declaration