/*
 * @lc app=leetcode.cn id=1013 lang=cpp
 *
 * [1013] 将数组分成和相等的三个部分
 */

// @lc code=start
class Solution
{
public:
    bool canThreePartsEqualSum(vector<int> &arr)
    {
        int sum = 0;
        for (auto i : arr)
            sum += i;
        if (sum % 3)
            return false;
        sum /= 3;
        int sumi = 0;
        int cnt = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sumi += arr[i];
            if (sumi == sum)
            {
                cnt++;
                sumi = 0;
            }
        }
        if (cnt >= 3)
            return true;
        else
            return false;
    }
};
// @lc code=end
