#include <iostream>
#include <cmath>

using namespace std;

double volume(double a)
{
    return (a * a * a);
}

double volume(double l, double h, double w)
{
    return (l * h * w);
}

double volume(double h, double r)
{
    return ( 3.14159 * h * r * r);
}

int main()
{
    cout<< "The volume of cube is " << volume(5.0) << endl;
    cout<< "The volume of cuboid is " << volume(5.0, 4.0, 3.0) << endl;
    cout<< "The volume of cylinder is " << volume(5.0, 2.5) << endl;

    return 0;

}