#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, rows, k = 1;

    cout << "Input number of rows: ";
    cin >> rows;

    // Loop to print the pattern with numbers increased by 1 in a right-angle triangle shape
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++) // Nested loop for printing numbers in each row
        {
            cout << k++ << " "; // Print the value of 'k' (increased by 1) and increment 'k' afterwards
        }
        cout << endl;
    }
}