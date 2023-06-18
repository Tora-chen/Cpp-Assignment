#include <iostream>
using namespace std;
class box {
public:
    float l,w,h;
    
    box(float a, float b, float c){
        l = a;
        w = b;
        h = c;
    }
    
    float vol(){
        return l*w*h;
    }
};
int main()
{
    box a(10.2,3.1,5.6);
    box b(11.21,9.22,13.5);
    box c(5.1,3.4,6.5);
    printf("%.3f %.3f %.3f", a.vol(), b.vol(), c.vol());
    return 0;
}
