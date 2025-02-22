#include <iostream>

using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 5, 5, 7, 8, 8, 9, 9, 2}; 
    int i, j; 
    int size = sizeof(nums) / sizeof(nums[0]); 
    cout << "Original array: " << endl;
    for (i = 0; i < size; i++) 
        cout << nums[i] << " "; 

    cout << "Repeating elements: " << endl; 
    for (i = 0; i < size; i++) // Outer loop to iterate through each element in the array
        for (j = i + 1; j < size; j++) // Inner loop to compare each element with subsequent elements
            if (nums[i] == nums[j]) // Check if current element is equal to any other element in the array
                cout << nums[i] << " " << endl;

    return 0; 
}