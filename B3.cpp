#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int n;
    int first;
    int last;
    int sum;
    int digits;
    int nn;
    int a, b;

    cout << " Input any number: ";
    cin >> n; 

    digits = (int)log10(n); // Calculating the number of digits in the number

    // Extracting the first and last digits of the number
    first = n / pow(10, digits);
    last = n % 10;

    // Swapping the first and last digits
    a = first * (pow(10, digits)); // Multiplying the first digit by a power of 10
    b = n % a; // Getting the remaining digits after removing the first digit
    n = b / 10; // Removing the last digit

    // Constructing the new number after swapping
    nn = last * (pow(10, digits)) + (n * 10 + first); // Constructing the new number

    cout << " The number after swapping the first and last digits is: " << nn << endl; // Displaying the result
}