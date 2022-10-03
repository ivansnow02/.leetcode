/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */

// @lc code=start
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int name_len = name.size();
        int typed_len = typed.size();
        int i=0,j=0;
        for(j = 0; j < typed_len; j++){
            if (i < name_len && name[i] == typed[j]){
                i++;
            }
            else if (i < 1 || name[i-1] != typed[j]) return false;
        }
        return i >name_len-1;
    }
};
// @lc code=end

