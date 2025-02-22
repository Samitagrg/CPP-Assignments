#include <iostream>

#include "Concept3.h"

using std::string;
using std::cout;
using std::endl;

int main()
{

    std::string studentName;
    std::string studentClass;
    int rollNum;
    double studentMarks;
  
    std::cout << "Student details: " << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, studentName);
  
    std::cout << "Class: ";
    std::getline(std::cin, studentClass);
  
    std::cout << "Roll number: ";
    std::cin >> rollNum;
  
    std::cout << "Marks (0-100): ";
    std::cin >> studentMarks;
  
    Student student(studentName, studentClass, rollNum, studentMarks);
  
    student.display();
  
    return 0;
  }