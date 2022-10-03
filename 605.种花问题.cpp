/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int cnt = 0;
        if (flowerbed.size() == 1)
        {
            if (flowerbed[0] == 0)
                cnt = 1;
        }
        else
        {
            if (flowerbed[0] == 0 && flowerbed[1] == 0)
            {
                cnt++;
                flowerbed[0] = 1;
            }
            for (int i = 1; i < flowerbed.size(); i++)
            {
                if (flowerbed[i] == 1 || flowerbed[i - 1] == 1)
                    continue;
                else if (flowerbed[i - 1] == 0)
                {
                    if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)
                    {
                        flowerbed[i] = 1;
                        cnt++;
                    }
                    else
                        continue;
                }
            }
        }
        return n <= cnt;
    }
};
// @lc code=end
