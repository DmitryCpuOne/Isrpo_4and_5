#pragma once

class Calculator {
private:
    double x, y;

public:
    Calculator(double a = 0.0, double b = 0.0)
        : x(a), y(b) {}

    double getX() const { return x; }
    double getY() const { return y; }

    double plus() const { return x + y; }
    double minus() const { return x - y; }
    double multiply() const { return x * y; }

    double divide() const {
        if (y == 0) return 0;
        return x / y;
    }

    double max() const { return (x > y ? x : y); }
    double min() const { return (x < y ? x : y); }
};
