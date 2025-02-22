#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Function to modify the vector of strings by capitalizing the first character of each word and converting the rest to lowercase
std::vector<std::string> test(std::vector<std::string> colors) 
{
  for(int i = 0; i < colors.size(); i++) 
  {
    colors[0][0] = toupper(colors[0][0]); // Capitalizing the first character of the first string in the vector

    // Capitalizing the first character of each string in the vector and converting the rest to lowercase
    colors[i][0] = toupper(colors[i][0]);
    for(int l = 1; l < colors[i].size(); l++) 
    {
      colors[i][l] = tolower(colors[i][l]);
    }
  }
  return colors;
}

int main()
{
  vector<string> colors = {"Blue", "red", "yellow", "green", "Pink"};

  cout << "Original Vector elements:" << endl;
  for (string c : colors)
    cout << c << " " << endl;

  vector<string> result = test(colors);
  cout << "Capitalize the first character of each vector element:" << endl;
  for (string c : result)
    cout << c << " " << endl;
}