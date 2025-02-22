#include <iostream>
#include <string>

using namespace std;

// Function to find the longest word in a string
string Longest_Word(string text) {

    string result_word, temp_str1;

    // Loop through each character in the string
    for (int x = 0; x < text.length(); x++)
    {
        // Check if the character is alphanumeric (letter or number)
        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
        {
            result_word.push_back(text[x]); // Add the character to the result word
        }
        else
        {
            break; // Break the loop if it's not alphanumeric
        }
    }

    // Loop through each character in the string
    for (int x = 0; x < text.length(); x++)
    {
        // Check if the character is alphanumeric
        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
        {
            temp_str1.push_back(text[x]); // Add the character to the temporary substring

            // Check if it's the last character of the string and the temp substring is longer than the result word
            if (x + 1 == text.length() && temp_str1.length() > result_word.length())
            {
                result_word = temp_str1; // Update the result word
            }
        }
        else
        {
            // Check if the temporary substring is longer than the result word
            if (temp_str1.length() > result_word.length())
            {
                result_word = temp_str1; // Update the result word
            }

            temp_str1.clear();
        }
    }

    return result_word;
}

int main() 
{
    cout << "Original String: C++ is a general-purpose programming language. \nLongest word: " << Longest_Word("C++ is a general-purpose programming language.") << endl;

    return 0;
}