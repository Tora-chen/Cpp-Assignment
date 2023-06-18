#include <iostream>
using namespace std;
class students{
public:
    string number;
    float score;
    
    void input(){
        cin >> number >> score;
    }
    
    void output(){
        cout << number << ' ';
        printf("%.2f\n", score);
    }
};
int main()
{
    students *a = new students[5];
    for(int i=0; i<5; i++) {
        a[i].input();
    }
    float sum = a[0].score + a[2].score + a[4].score;
    printf("%.2f\n", sum/3);
    a[0].output();
    a[2].output();
    a[4].output();
    return 0;
}
