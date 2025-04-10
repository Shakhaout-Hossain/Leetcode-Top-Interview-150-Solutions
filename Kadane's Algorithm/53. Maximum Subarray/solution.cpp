class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n=nums.size(),i;
            long long mx=nums[0],sum=0;
            for(i=0; i<n; i++){
                sum+=nums[i];
                if(mx<sum)mx=sum;
                if(sum<0)sum=0;
            }
            return mx;
        }
    };