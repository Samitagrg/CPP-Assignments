#include<iostream>
#include <algorithm>

using namespace std;

// Function to find and print the k largest elements in the array
void kLargest(int num[], int n, int k)
{
    sort(num, num+n, greater<int>()); // Sorting the array in descending order using sort function

    cout << "\nLargest " << k << " Elements: " << endl; 

    for (int i = 0; i < k; i++)
        cout << num[i] << " " << endl;
}

int main()
{
    int num[] = {11, 5, 1, 12, 9, 27, 45, 3};

    int n = sizeof(num)/sizeof(num[0]);

    cout << "Original array: " << endl;
    for (int i=0; i < n; i++) 
        cout << num[i] <<" " << endl;

    int k = 4;
    kLargest(num, n, k);
}