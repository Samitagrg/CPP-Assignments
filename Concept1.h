#pragma once
#include <string>

class Employee {
    private:
        int employee_id;
        std::string name;
        float salary;

    public:
        Employee() = default;

        Employee(int i, std::string n, float s);

        int get_id();

        std::string get_name();

        float get_salary();
};