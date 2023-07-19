#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = nums.size();
        int i = 0;
        int sum = 0;
        int sub = 1e9;
        for (int j = i; j <length; j++)
        {
            sum += nums[j];
            while (sum >= target)
            {
                int len = j - i + 1;
                sub = min(len, sub);
                sum -= nums[i];
                i++;
            }
        }
        if (sub==1e9)
        {
            return 0;
        }
        return sub;
    }
};


int main()
{
    vector <int> nums = { 2,3,1,2,4,3 };
    Solution solution;
    int target;
    cin >> target;
    int len;
    len = solution.minSubArrayLen(target, nums);
    cout << len << endl;

}