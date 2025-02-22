#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;

    cout << " Input number of rows: ";
    cin >> rows;

    // Loop to print the pattern using numbers starting from 1
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++) // Nested loop for printing numbers in each row
        {
            cout << j; // Print the current value of 'j' (numbers starting from 1)
        }
        cout << endl;
    }
}