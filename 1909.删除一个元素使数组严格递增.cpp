/*
 * @lc app=leetcode.cn id=1909 lang=cpp
 *
 * [1909] 删除一个元素使数组严格递增
 */

// @lc code=start
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int len = nums.size();
        int cnt = 0;
        for (int i = 1;i < len&&cnt<2; i++){
            if (nums[i]>nums[i-1]) continue;
            cnt++;
            if (i>1&&nums[i-2]>=nums[i]){
                nums[i]=nums[i-1];
            }
        }
        if (cnt<=1) return true;
        else return false;
    }
};
// @lc code=end

