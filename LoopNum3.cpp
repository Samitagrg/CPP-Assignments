#include <iostream>

using namespace std; 

int main()
{
    int n, i, sum = 0;
    int t = 1;

    cout << " Input number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << t << " ";
        if (i < n)
        {
            cout << "+ ";
        }
        sum = sum + t;
        t = (t * 10) + 1; // Generating the next term of the series by appending '1' to the current term
    }

    cout << "\n The sum of the series is: " << sum << endl; // Displaying the final sum of the series
}