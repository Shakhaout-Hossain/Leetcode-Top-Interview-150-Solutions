vector<int>dp(46,-1);
class Solution {
    
public:
    
    int climbStairs(int n) {
        if(n<=2){
            return dp[n]=n;
        }
        if(dp[n]!=-1)return dp[n];
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
};