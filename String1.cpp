#include <iostream>
#include <string>

using namespace std;

string reverse_string(string str) {
	string temp_str = str; // Creating a temporary string to store the original string
	int index_pos = 0; // Initializing index position to start from the beginning

	// Loop to reverse the string
	for (int x = temp_str.length()-1; x >= 0; x--) // Iterating through the string in reverse order
	{
		str[index_pos] = temp_str[x]; // Reversing the characters and storing in the original string
		index_pos++; // Moving to the next index position
	}
	return str; // Returning the reversed string
}

int main() 
{
	cout << "Enter string: ";
    cin  >> str;
	cout << "\nReverse string: " << reverse_string; 

	return 0;
}