#include<iostream>
#include<iomanip>
using namespace std;
int n;
class discount{
public:
    discount(int j,int n):jnum(j),num(n){}
    void total();
    static float handle();
private:
    static int price,sum;
    int jnum;
    int num;
};
int discount::sum=0;
int discount::price=30;
void discount::total()
{
    sum+=num;
}
float discount::handle()
{
    return(1.0*sum*price*(100-n)/100);
}
int main()
{
    
    discount person1(1001,5),person2(1002,20),person3(1003,75);
    cin>>n;
    person1.total();
    person2.total();
    person3.total();
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<discount::handle()<<" ";
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<1.0*discount::handle()/100<<endl;
    return 0;
}
