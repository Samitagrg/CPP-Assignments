#include<iostream>
#include<climits>

using namespace std;

// Function to find three largest elements in the array
void three_largest(int arr[], int arr_size) 
{
    int i, first, second, third;

    if (arr_size < 3)
    {
        cout << "Invalid Input" << endl;
    }

    third = first = second = INT_MIN; // Initializing first, second, and third as minimum integer value
    for (i = 0; i < arr_size; i ++)
    {
        if (arr[i] > first) // Checking if current element is larger than the first largest element
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second) // Checking if current element is larger than the second largest element
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third) // Checking if current element is larger than the third largest element
        {
            third = arr[i];
        }
    }

    cout << "Three largest elements are: " << first << ", " << second << ", " << third << endl;
}

int main()
{
    int num[] = {5, 17, 2, 19, 12, 35, 50, 76};

    int n = sizeof(num)/sizeof(num[0]);

    cout << "Original array: " << endl;
    for (int i=0; i < n; i++) 
        cout << num[i] <<" " << endl;

    three_largest(num, n);
    return 0;
}