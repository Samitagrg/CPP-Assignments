#pragma once

#include <string>

class Triangle {
    private:
        double side1;
        double side2;
        double side3;

    public:
        Triangle() = default;

        Triangle(double s1, double s2, double s3): side1(s1), side2(s2), side3(s3) {}

        void determineType();
};