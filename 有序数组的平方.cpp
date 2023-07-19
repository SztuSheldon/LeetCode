#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
     vector<int> sortedSquares(vector<int>& nums) {
        int k = nums.size()-1;
        vector<int> a(nums.size(), 0);
        for (int i = 0, j = k; i<=j;)
        {
            if (pow(nums[i],2)>pow(nums[j],2))
            {
                a[k] = pow(nums[i], 2);
                k--;
                i++;
            }
            else
            {
                a[k] = pow(nums[j], 2);
                k--;
                j--;
            }
        }
        return a;
    }
};


int main()
{
    vector <int> nums = { -4,-1,0,3,10 };
    Solution solution;
    nums=solution.sortedSquares(nums);
    int len = nums.size();
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

}
