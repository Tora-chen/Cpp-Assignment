#include <iostream>
#include <algorithm>
using namespace std;
class integer {
public:
    int nums[3];

    void input()
    {
        for (int i = 0; i < 3; i++) {
            cin >> nums[i];
        }
    }

    int max()
    {
        int max = nums[0] > nums[1] ? nums[0] : nums[1];
        max = max > nums[2] ? max : nums[2];
        return max;
    }

    int ave()
    {
        return (nums[0] + nums[1] + nums[2]) / 3;
    }

    void Sort()
    {
        sort(nums, nums + 3);
    }

    void output()
    {
        for (int i = 0; i < 3; i++) {
            cout << nums[i] << ' ';
        }

    }

};
int main()
{
    integer A;
    A.input();
    cout << A.max() << '\n' << A.ave() << '\n';
    A.Sort();
    A.output();
    return 0;
}