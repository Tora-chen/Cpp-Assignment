#include <iostream>
#include <math.h>
using namespace std;
class point{
public:
    float x,y;
    
    point(float a, float b) {
        x=a;y=b;
    };
    
    friend float l(point a, point b){
        return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    }
};
int main()
{
    point a(0,0),b(3,4);
    
    printf("%.2f", l(a,b));
    return 0;
}
