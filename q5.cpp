#include <iostream>
#include <cmath>
using namespace std;

void getArea(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float A = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is " << A << endl;
}

int main()
{
    float a, b, c;

    cout << "Enter the values of the sides of the triangle" << endl;
    cin >> a >> b >> c;

    getArea(a, b, c);

    return 0;
}