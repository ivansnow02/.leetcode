/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 * 动态窗口法
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int ans = __INT32_MAX__;
        int l = 0;
        int sum = 0;
        for (int r = 0; r < nums.size(); r++)
        {
            sum += nums[r];
            while (sum >= target)
            {
                ans = min(ans, r - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        return ans == __INT32_MAX__ ? 0 : ans;
    }
};
// @lc code=end
