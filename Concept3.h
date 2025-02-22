#pragma once
#include <string>

class Student {
    private:
        std::string name;
        std::string studentClass;
        int rollNumber;
        float marks;

    public:
        Student() = default;

        Student(const std::string &studentName, const std::string &studentClass, int rollNum, double studentMarks);
        
        void set_name(std::string n) {
            name = n;
        }

        std::string get_name() {
            return name;
        }

        void set_studentClass(std::string c) {
            studentClass = c;
        }

        std::string get_studentClass() {
            return studentClass;
        }

        void set_rollNumber(int r) {
            rollNumber = r;
        }

        int get_rollNumber() {
            return rollNumber;
        }

        void set_marks(float m) {
            marks = m;
        }

        float get_marks() {
            return marks;
        }

        std::string calculateGrade();
        void display();

};