#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() 
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    // Using reverse() function to reverse s
    reverse(s.begin(), s.end());

    cout << s;
    return 0;
}