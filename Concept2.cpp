#include <iostream>

#include "Concept2.h"

using std::string;
using std::cout;
using std::endl;

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int Date::get_day() const {
    return day;
}

int Date::get_month() const {
    return month;
}

int Date::get_year() const {
    return year;
}

bool Date::isValidDate() const {
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1 || day > 31) {
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }
    if (month == 2) {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (day > 29 || (day == 29 && !isLeap)) {
            return false;
        }
    }
    return true;
}