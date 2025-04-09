class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n = nums.size();
            int i,j,k=1,m;
            for(i=1; i<n; i++){
                if(nums[i]!=nums[k-1]){
                    nums[k++]=nums[i];
                }
                else if(k>1 && nums[i]!=nums[k-2]){
                    nums[k++] = nums[i];
                }
                else if(k==1){
                    nums[k++] = nums[i];
                }
            }
            return k;
        }
    };