/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> result(n, vector(n, 0));
        int starti = 0, startj = 0, left = 1;
        int cnt = 1;
        int c = n / 2;
        while (c--)
        {
            for (int j = startj; j < n - left; j++)
            {
                result[starti][j] = cnt++;
            }
            for (int i = starti; i < n - left; i++)
            {
                result[i][n - left] = cnt++;
            }
            for (int j = n - left; j > startj; j--)
            {
                result[n - left][j] = cnt++;
            }
            for (int i = n - left; i > starti; i--)
            {
                result[i][startj] = cnt++;
            }

            starti++;
            startj++;
            left++;
        }
        if (n % 2)
            result[n / 2][n / 2] = cnt;
        return result;
    }
};
// @lc code=end
