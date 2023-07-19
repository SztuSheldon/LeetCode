#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int slow = 0;
        for (int fast = 0; fast < len; fast++)
        {
            if (nums[fast]!=val)
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};


int main()
{
    vector <int> nums = {3,2,2,3};
    Solution solution;
    int val;
    cin >> val;
    int len = solution.removeElement(nums, val);
    cout << len <<endl;
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

}
