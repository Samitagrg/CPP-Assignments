#include<iostream>
#include<climits>

using namespace std;

// Function to find the second largest element in the array
void second_largest(int num[], int arr_size)
{
    int i, first_element, second_element;

    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        cout << " Invalid Input " << endl;
        return;
    }

    first_element = second_element = INT_MIN;
    for (i = 0; i < arr_size; i ++) // Loop to find the second largest element in the array
    {
        if (num[i] > first_element) // Checking if current element is larger than the first largest element
        {
            second_element = first_element;
            first_element = num[i];
        }
        else if (num[i] > second_element && num[i] != first_element) // Checking if current element is larger than the second largest element and not equal to first largest element
        {
            second_element = num[i];
        }
    }

    if (second_element == INT_MIN) // Checking if second largest element is still initialized as minimum integer value
    {
        cout << "No second largest element" << endl;
    }
    else
    {
        cout << "The second largest element is: " << second_element << endl;
    }
}

int main()
{
    int num[] = {5, 10, 8, 22, 19, 34, 57, 61};

    int n = sizeof(num)/sizeof(num[0]);

    cout << "Original array: " << endl;
    for (int i=0; i < n; i++) 
        cout << num[i] <<" " << endl;
    second_largest(num, n);
    return 0;
}