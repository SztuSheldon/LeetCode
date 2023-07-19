#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& a, int target) {
        int right = a.size() - 1;
        int left = 0;
        while (left<=right)
        {
            int middle = (right + left) / 2;
            if (a[middle]==target)
            {
                return middle;
            }
            else if (a[middle]>target)
            {
                right = middle - 1;
            }
            else if (a[middle]<target)
            {
                left = middle + 1;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> a= {-1,0,3,5,9,12 };
    int target = 9;
    Solution solution;
    cout << solution.search(a,target) << endl;
}