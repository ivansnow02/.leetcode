/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution
{
public:
    double newton(double x, double a)
    {
        double xi = 0.5 * (x + a / x);
        if (fabs(xi - (double)(x)) < 0.1)
        {
            return xi;
        }
        return newton(xi, a);
    }
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        else
            return newton((double)x, (double)x);
    }
};
// @lc code=end
