#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Function to find elements in the vector that are smaller than both adjacent neighbors
std::vector<int> test(std::vector<int> num)
{
    std::vector<int> temp; // Initializing an empty vector to store elements that meet the condition
    for(int i=1; i<num.size()-1; i++) 
    {
        // Checking if the current element is smaller than both its previous and next elements
        if(num[i] < num[i-1] && num[i] < num[i+1]) 
            temp.push_back(num[i]); // If the condition is met, adding the element to the 'temp' vector
    }
    return temp;
}

int main()
{
    // Uncomment either of the following lines to test different sets of numbers

    // vector<int> nums = {7, 2 ,5, 3, 1, 5, 6}; // vector with non-matching elements
    vector<int> num = {1, 2 ,5, 0, 3, 1, 7}; // vector with elements smaller than both adjacent neighbors

    cout << "Original Vector elements:" << endl;
    for (int x : num)
        cout << x << " " << endl;

    vector<int> result = test(num);
    cout << "Vector elements that are smaller than its adjacent neighbors:" << endl;   
    for (int y : result)
        cout << y << " " << endl;
}