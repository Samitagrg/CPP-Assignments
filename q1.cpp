#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter your number: ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "Your number is an even number." << endl;
    }
    else
    {
        cout << "Your number is an odd number." << endl;
    }

    return 0;
}