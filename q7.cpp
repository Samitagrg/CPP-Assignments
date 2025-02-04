#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int i = 2;
    int isPrime = 1;

    cout << "Enter a number:";
    cin >> num;


    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime == 1 && num > 1)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}