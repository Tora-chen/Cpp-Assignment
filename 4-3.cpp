#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <math.h>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double x_, double y_) : x(x_), y(y_) {};
    friend double dist(Point a, Point b);
};
class Circle {
private:
    Point center;
    double radius;
public:
    Circle(Point center, double radius) : center(center),radius(radius) {};
    bool isInside(Point a) {
        return (abs(dist(a, center)-radius) < 1e-6);
    }
};

double dist(Point a, Point b) {
    return pow((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y), 0.5);
}

int main()
{
    Circle circle({1,2},5);
    cout << (int)circle.isInside({6,2});
    return 0;
}
