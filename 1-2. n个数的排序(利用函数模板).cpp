#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
void Sort(T arr[], int n)
{
    for(int i=0;i<n - 1;i++){
        for (int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[5]{0};
    string b[3];
    float c[8]{0};
    
    for(int i=0;i < 5;i++){
        cin >> a[i];
    }
    for(int i=0;i < 3;i++){
        cin >> b[i];
    }
    for(int i=0;i< 8;i++){
        cin >> c[i];
    }
    
    Sort(a,5);
    Sort(b,3);
    Sort(c,8);
    
    for(int i=0;i < 5;i++){
        cout << a[i] << ' ';
    }
    cout << '\n';
    for(int i=0;i < 3;i++){
        cout << b[i] << ' ';
    }
    cout << '\n';
    for(int i=0;i< 8;i++){
        cout << c[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}
