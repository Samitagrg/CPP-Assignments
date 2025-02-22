#include <iostream>
#include <vector>

using namespace std;

// Function to check if all characters in the second string are present in the first string
string test(vector<string> strs) 
{
    for (auto ch : strs.at(1)) { // Iterating through each character in the second string

        // Checking if the uppercase or lowercase form of the character exists in the first string
        if (strs.at(0).find(toupper(ch)) == string::npos && strs.at(0).find(tolower(ch)) == string::npos)
            return "false";
    }
    return "true";
}

int main() 
{
    vector<string> strs = {"Samita", "Sam"};

    cout << "Original String elements: " << endl;
    for (string c : strs)
        cout << c << " " << endl;

    cout << "First string contains all letters from second string?: " << endl;
    string result = test(strs);
    cout << result << " " << endl;
}