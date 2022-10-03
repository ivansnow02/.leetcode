/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
public:
    int gcd(int a, int b){
        if (a < b) swap(a, b);
        if (b == 0) return a;
        else return gcd(b, a%b);
    }
    int ngcd(int *a, int n){
        if (n == 1)  return *a;
        return gcd(a[n-1], ngcd(a, n-1));
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        int ab[10005] = {0};
        int x[10005] = {0};
        for (int i = 0; i < deck.size(); i++){
            ab[deck[i]] ++;
        }
        int j = 0;
        for (int i = 0; i <= 10000; i++){
            if (ab[i] > 0){
                if (ab[i] < 2) return false;
                x[j] = ab[i];
                j++;
            }
        }
  //      if (j == 1) return true;   

        /*for (int i = 1; i < j; i++){
            if (x[i] != x[i - 1]) return false;
        } */
        int xgcd = ngcd(x,j);

        return xgcd > 1;
    }
};
// @lc code=end

