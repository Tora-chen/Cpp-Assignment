#include <iostream>
using namespace std;
float min(float a, float b)
{
    return (a < b) ? a : b;
}
string min(string a, string b, string c)
{
    string min;
    min = a < b ? a : b;
    min = c < min ? c : min;
    return min;
}
int min(int nums[])
{
    int min = nums[0];
    for (int i = 0; i < 10; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}
int main()
{
    float a, b;
    string sa, sb, sc;
    int nums[10]{ 0 };
    cin >> a >> b;
    cin >> sa >> sb >> sc;
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }

    cout << min(a, b) << ' ' << min(sa, sb, sc) << ' ' << min(nums);

    return 0;
}