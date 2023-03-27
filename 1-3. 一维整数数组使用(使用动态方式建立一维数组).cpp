#include <iostream>
using namespace std;
void f(int n)
{
    int* arr = new int[n];
    int sum{ 0 };
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        sum += arr[i];
    }
    cout << sum;
    delete arr;
}
int main()
{
    int n;
    cin >> n;
    f(n);
    return 0;
}