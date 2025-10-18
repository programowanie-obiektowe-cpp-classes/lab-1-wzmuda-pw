#include <iostream>
#include <cmath>

using namespace std;

class Wektor2D
{

private:
    double x, y;

public:
    Wektor2D() : x(0), y(0) {}

    void   setX(double X0) { x = X0; }
    double getX() const { return x; }

    void   setY(double Y0) { y = Y0; }
    double getY() const { return y; }

    Wektor2D(double X0, double Y0) : x(X0), y(Y0) {}

    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }
};
