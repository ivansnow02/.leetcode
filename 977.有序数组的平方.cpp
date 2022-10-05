/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> nums_pow(nums.size());
        int i = 0, j = nums.size() - 1, k = nums.size() - 1;
        while(i <= j){
            if(nums[i]*nums[i]<nums[j]*nums[j]){
                nums_pow[k] = nums[j] * nums[j];
                j--;
            }
            else{
                nums_pow[k] = nums[i] * nums[i];
                i++;
            }
            k--;
        }
        return nums_pow;
    }
};
// @lc code=end

