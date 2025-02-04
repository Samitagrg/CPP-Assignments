#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 12, 28, 82, 31};
    int largest;
    largest = arr[0];

    for (int i = 1; i<5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "The largest element is " << largest << endl;
}