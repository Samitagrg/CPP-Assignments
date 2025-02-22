#pragma once
#include <string>

class Date {
    private:
        int day;
        int month;
        int year;

    public:
        Date() = default;

        Date(int d, int m, int y);

        void set_date(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }
        
        int get_day() const;

        int get_month() const;

        int get_year() const;

        bool isValidDate() const;

};