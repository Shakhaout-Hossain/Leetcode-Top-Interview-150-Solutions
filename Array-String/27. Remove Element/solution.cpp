class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int n = nums.size(),i,j=0;
            for(i=0; i<n; i++){
                if(nums[i]!=val){
                    nums[j++]=nums[i];
                }
            }
            return j;
        }
    };