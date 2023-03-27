#include <iostream>
using namespace std;
const float pi{ 3.14 };
class circle {
public:
    float radius;
    float length()
    {
        return 2 * pi * radius;
    }
    float area()
    {
        return pi * radius * radius;
    }
    void set()
    {
        cin >> radius;
    }
    void show()
    {
        printf("%.2f %.2f", length(), area());
    }
};
int main()
{
    circle A;
    A.set();
    A.show();
    return 0;
}