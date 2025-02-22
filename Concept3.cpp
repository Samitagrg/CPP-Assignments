#include <iostream>

#include "Concept3.h"

using std::string;
using std::cout;
using std::endl;

Student::Student(const string &studentName, const string &studentClass, int rollNum, double studentMarks)
    : name(studentName), studentClass(studentClass), rollNumber(rollNum), marks(studentMarks) {}

string Student::calculateGrade() 
{
    if (marks >= 90) {
        return "A+";
    } else if (marks >= 80) {
        return "A";
    } else if (marks >= 70) {
        return "B";
    } else if (marks >= 60) {
        return "C";
    } else {
        return "D";
    }
}

void Student::display() 
{
    cout << "Name: " << name << endl;
    cout << "Class: " << studentClass << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << calculateGrade() << endl;
}