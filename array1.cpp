#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for  (int i = 0; i < n; i++)
    
        sum += arr[i];

        cout << "the sum is " << sum << endl;
    
    return 0;
}