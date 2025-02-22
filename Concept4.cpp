#include <iostream>

#include "Concept4.h"

using std::string;
using std::cout;
using std::endl;

// Constructor definition
Triangle::Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

// Function to determine the type of the triangle
void Triangle::determineType() 
{
    if (side1 == side2 && side2 == side3) 
    {
        cout << "Equilateral Triangle" << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) 
    {
        cout << "Isosceles Triangle" << endl;
    } else {
        cout << "Scalene Triangle" << endl;
    }
}