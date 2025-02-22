#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Function to find strings in the vector that contain at least one digit
std::vector<std::string> test(std::vector<std::string> colors) 
{
  std::vector<std::string> result;

  // Loop through each string in the input vector 'colors'
  for(auto& text : colors){
    auto it = std::find_if(text.begin(), text.end(), [](char c){return std::isdigit(c);});

    if(it != text.end()) // If a digit is found in the string
    {
      result.push_back(text);
    }
  }
  return result;
}

int main()
{
	vector<string> colors = {"blue", "yellow23", "1green", "red"};

    cout << "Original Vector elements: " << endl;
	for (string c : colors)
        cout << c << " " << endl;

    vector<string> result = test(colors);
    cout << "Strings that contain a number(s) from the vector above: " << endl;   
    for (string c : result)
        cout << c << " " << endl;
}