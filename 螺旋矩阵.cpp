#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int x = 0, y = 0;
        int gap = 1;
        int count = 1;
        int time = n / 2;
        int mid = n / 2;
        vector<vector<int>> mat(n, vector<int>(n, 0));
        while (time--)
        {
            int i = x, j = y;
            for (int i = x; j < n - gap; j++)
            {
                mat[i][j] = count++;
            }
            for (int j = n - gap; i < n - gap; i++)
            {
                mat[i][j] = count++;
            }
            for (int i = n - gap; j > y; j--)
            {
                mat[i][j] = count++;
            }
            for (int j = y; i > x; i--)
            {
                mat[i][j] = count++;
            }
            x++;
            y++;
            gap++;
        }
        if (n % 2) {
            mat[mid][mid] = count;
        }
        return mat;
    }
};


int main()
{
    Solution solution;
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    mat=solution.generateMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

}