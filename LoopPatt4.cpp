#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, spc, rows, k;

    cout << " Input number of rows: ";
    cin >> rows;

    spc = rows + 4 - 1; // Calculate the number of spaces for formatting

    // Loop to print the pyramid pattern with asterisks
    for (i = 1; i <= rows; i++) // Loop for the number of rows
    {
        for (k = spc; k >= 1; k--) // Loop to print spaces before the asterisks
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++) // Loop to print asterisks in each row
        {
            cout << "* "; // Print an asterisk followed by a space
        }

        cout << endl;
        spc--;
    }
}