class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int n=nums.size(),i,r=0;
            
            for(i=0; i<n; i++){
                if(r<i)return false;
                if((i+nums[i])>r)r=(i+nums[i]);
                
            }
            return true;
    
        }
    };