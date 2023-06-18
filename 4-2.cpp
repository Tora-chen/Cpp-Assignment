#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <iomanip>
using namespace std;

const double PI = 3.14;
class Container {
public:
    Container(double r) : radius(r) {};
    double radius;
    virtual double area() const = 0;
    virtual void printArea() {
        cout << fixed << setprecision(2) << area() << ' ';
    }
};

class Cube : public Container{
public:
    Cube(double r) : Container(r) {};
    double area() const {
        return 6*radius*radius;
    }
};

class Globe : public Container {
public:
    Globe(double r) : Container(r) {};
    double area() const{
        return 4*PI*radius*radius; 
    }
};

class Cylinder : public Container {
private:
    double height;
public:
    Cylinder(double r, double h) : Container(r), height(h) {};
    double area() const{
        return 2*PI*radius*radius + 2*PI*radius*height;
    }
};

int main()
{
    Cube cube(6);
    Globe global(5);
    Cylinder cylinder(5,16);
    Container *cont[] {&cube, &global, &cylinder};
    for(int i=0; i<3; i++) {
        cont[i]->printArea();
    }
    return 0;
}
