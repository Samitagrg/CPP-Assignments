#include<iostream>
 
using namespace std;


void replace_elements(int num[], int n)
{
    // If the array has 1 or fewer elements, no replacements can be done
    if (n <= 1)
        return;

    // Initialize the first element with the product of the first two elements
    int prev_element = num[0];
    num[0] = num[0] * num[1];

    // Loop through the array to replace elements with the product of their neighbors
    for (int i = 1; i < n - 1; i++)
    {
        int curr_element = num[i];

        // Replace the current element with the product of its neighbors
        num[i] = prev_element * num[i + 1];

        // Update the previous element for the next iteration
        prev_element = curr_element;
    }

    // Replace the last element with the product of its neighbor (previous element)
    num[n - 1] = prev_element * num[n - 1];
}

int main()
{
    int num[] = {1, 3, 5, 8, 9, 11, 15, 18, 20};
    int n = sizeof(num) / sizeof(num[0]);
    cout << "Original array: " << endl;
    for (int i = 0; i < n; i++)
        cout << num[i] << " " << endl;
    replace_elements(num, n); // Replace array elements with the product of their neighbors
    cout << "New array elements: " << endl;
    for (int i = 0; i < n; i++)
        cout << num[i] << " " << endl;
    return 0;
}