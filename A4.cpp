#include<iostream>
#include<algorithm>

using namespace std;

// Function to find the smallest missing element in a sorted array
int smalest_missing_num(int num[], int start_position, int end_position)
{
    // If start position is greater than end position, return the next possible smallest missing number
    if (start_position > end_position)
        return end_position + 1;

    // If start position doesn't match the value at that index, return the start position itself
    if (start_position != num[start_position])
        return start_position;

    // Calculate the middle index
    int mid = (start_position + end_position) / 2;

    // If the value at mid index equals the index itself, continue searching in the right subarray
    if (num[mid] == mid)
        return smalest_missing_num(num, mid + 1, end_position);

    // Otherwise, continue searching in the left subarray
    return smalest_missing_num(num, start_position, mid);
}

int main()
{
    int num[] = {0, 1, 3, 9, 11, 16, 17, 18, 20};

    int result;

    int n = sizeof(num) / sizeof(num[0]);

    cout << "Original array: " << endl;
    for (int i = 0; i < n; i++)
        cout << num[i] << " " << endl;
    result = smalest_missing_num(num, 0, n - 1);

    cout << "Smallest missing element is " << result << endl;

    return 0;
}