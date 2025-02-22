#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, spc, rows, k;

    cout << " Input number of rows: ";
    cin >> rows;

    spc = rows + 4 - 1;

    // Loop to print the pyramid pattern using numbers with repetition
    for (i = 1; i <= rows; i++) // Loop for the number of rows
    {
        for (k = spc; k >= 1; k--) // Loop to print spaces before the numbers
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++) // Loop to print numbers in each row
        {
            cout << i << " "; // Print the value of 'i' (repeated numbers) followed by a space
        }

        cout << endl;
        spc--;
    }
}