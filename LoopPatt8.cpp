#include <iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout << " Input the number of rows: ";
    cin >> n;

    for (i = 1; i <= n;)
    {
        cout << i;

        for (j = i + 1; j <= n;)
        {
            cout << j;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}