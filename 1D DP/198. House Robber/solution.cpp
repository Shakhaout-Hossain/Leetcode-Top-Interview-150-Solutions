vector < int > dp(101,-1);
class Solution {
public:
    int rob(vector<int>& nums) {
        for(int i=0; i<101; i++)dp[i]=-1;
        return MaxRob(nums,nums.size()-1);
    }
    
    int MaxRob(vector<int>& v, int n)
    {
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=max(MaxRob(v,n-1),v[n]+MaxRob(v,n-2));
    }
};