#include <iostream>

using namespace std; 

int main()
{
    int num1, ctr = 0;

    cout << " Input a number to find the last prime number occurs before the number: ";
    cin >> num1;

    for (int n = num1 - 1; n >= 1; n--)
    {
        for (int m = 2; m < n; m++) // Loop to check if 'n' is a prime number
        {
            if (n % m == 0) // If 'n' is divisible by any number other than 1 and itself
                ctr++; // Increment counter
        }

        if (ctr == 0) // If 'ctr' is 0, 'n' is a prime number
        {
            if (n == 1) // If 'n' is 1, there's no prime number less than 2
            {
                cout << "no prime number less than 2";
                break; // Break the loop
            }

            // Display the last prime number before the entered number
            cout << n << " is the last prime number before " << num1 << endl;
            break; // Break the loop
        }

        ctr = 0;
    }

    return 0;
}