class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size(),i,j;
            k=(k%n);
            for(i=0;i<n/2; i++){
                swap(nums[i],nums[n-i-1]);
            }
            for(i=0;i<k/2; i++){
                swap(nums[i],nums[k-i-1]);
            }
            j=n-1;
            for(i=k;i<n-((n-k)/2); i++){
                swap(nums[i],nums[j--]);
            }
        }
    };