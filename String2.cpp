#include <iostream>
#include <string>

using namespace std;

// Function to capitalize the first letter of each word in a string
string Capitalize_first_letter(string text) {

    // Loop through each character in the string
    for (int x = 0; x < text.length(); x++)
    {
        // If it's the first character of the string or after a space, capitalize it
        if (x == 0 || text[x - 1] == ' ')
        {
            text[x] = toupper(text[x]); // Convert the character to uppercase
        }
    }

    return text;
}

int main() 
{
    cout << "\n" << Capitalize_first_letter("cpp string exercises");

    return 0;
}