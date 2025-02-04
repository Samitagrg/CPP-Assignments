#include <iostream>

using namespace std;

int main() 
{
    float b, l, A;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the breadth of the rectangle: ";
    cin >> b;

    A = (l * b) / 2;

    cout << "The area of the rectangle is " << A << endl;

    return 0;
}