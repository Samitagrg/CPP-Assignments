#include <string>
#include <iostream>

#include "Concept1.h"

using std::string;
using std::cout;
using std::endl;

Employee::Employee(int i, string n, float s) {
    employee_id = i;
    name = n;
    salary = s;

    cout << "Employee " << name << " with ID " << employee_id 
        << " has salary: " << salary << endl;
}

int Employee::get_id() {
    return employee_id;
}

string Employee::get_name() {
    return name;
}

float Employee::get_salary() {
    return salary;
}