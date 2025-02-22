#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;

    cout << " Input number of rows: ";
    cin >> rows;

    // Loop to print the right angle triangle pattern with asterisks
    for (i = 1; i <= rows; i++) // Loop for the number of rows
    {
        for (j = 1; j <= i; j++) // Nested loop for printing asterisks in each row
        {
            cout << "*";
        }
        cout << endl;
    }
}