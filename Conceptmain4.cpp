#include "Concept4.h"

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() 
{
    double s1, s2, s3;

    cout << "Input the lengths of the three sides of the triangle: ";
    cout << "Side1: ";
    cin >> s1;
    cout << "Side2: ";
    cin >> s2;
    cout << "Side3: ";
    cin >> s3;

    Triangle triangle(s1, s2, s3);
    triangle.determineType();

    return 0;
}