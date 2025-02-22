#include <iostream>

#include "Concept2.h"

using std::string;
using std::cout;
using std::endl;

int main() 
{
    // Create a date object
    Date date(0, 0, 0); // Initialize Date object with default values
  
    // Set the date
    int day, month, year; // Define variables to store day, month, and year
    std::cout << "Input day: "; // Prompt user to input day
    std::cin >> day; // Input for day
    std::cout << "Input month: "; // Prompt user to input month
    std::cin >> month; // Input for month
    std::cout << "Input year: "; // Prompt user to input year
    std::cin >> year; // Input for year
  
    date.set_date(day, month, year); // Set Date object with provided values
  
    // Get and display the date
    std::cout << "Date: " << date.get_day() << "/" << date.get_month() << "/" << date.get_year() << std::endl; // Output date
  
    // Validate the date
    if (date.isValidDate())
      std::cout << "The date is valid." << std::endl; // Output for a valid date
    else
      std::cout << "The date is invalid." << std::endl; // Output for an invalid date
  
    return 0; // Return 0 to indicate successful completion
  }