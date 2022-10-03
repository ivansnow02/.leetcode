/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int sc[26]={0};
        int goalc[26]={0};
        int slen = s.size();
        int goallen = goal.size();
        if (slen != goallen) return false;
        for (int i = 0; i<slen; i++){
            sc[s[i] - 'a'] ++;
        }
        for (int i = 0; i<goallen; i++){
            goalc[goal[i] - 'a'] ++;
        }

        int cnt = 0;
        bool flag = false;
        for (int i = 0; i<26; i++){
            if (sc[i] != goalc[i]) return false;
            else if (sc[i]>1) flag = true;
        }
        for (int i = 0; i<slen; i++){
            if (s[i] != goal[i]){
                cnt ++;
            }
        }
        return cnt == 2 || (cnt == 0 && flag);
    }
};
// @lc code=end

