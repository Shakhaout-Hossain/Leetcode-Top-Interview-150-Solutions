class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size();
            int i, p=nums[0], j=1, k=1;
            for(i=1; i<n; i++){
                if(nums[i]!=p){
                    nums[j++]=nums[i];
                    p = nums[i];
                }
            }
            return j;
        }
    };