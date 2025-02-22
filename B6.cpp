#include <iostream>
#include <sstream>
using namespace std;

int main() 
{
    int x, y;

    cout << "Enter first integers: " << endl;
    cin >> x; 

    cout << "Enter second integers: " << endl;
    cin >> y;

    while (cin >> x >> y) { // Loop to read integer inputs until the end of input (Ctrl+D in terminal)
        stringstream str1; // Declaring a stringstream object 'str1' for string manipulation

        str1 << x + y; // Adding integers x and y and storing the result as a string in stringstream 'str1'

        cout << str1.str().size() << endl; // Printing the size (number of characters) of the resulting string
    }

    return 0;
}