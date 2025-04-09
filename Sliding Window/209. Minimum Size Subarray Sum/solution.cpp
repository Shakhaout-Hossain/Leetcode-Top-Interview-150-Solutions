class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int l=0, r=0, n=nums.size(), mn=1e6;
            long long sum=0;
            for(r=0; r<n; r++){
                sum+=nums[r];
                if(sum>=target){
                    while(l<=r&&sum>=target){
                        mn=min(mn, r-l);
                        sum-=nums[l++];
                    }
                }
            }
            if(mn==1e6)return 0;
            return mn+1;
        }
    };