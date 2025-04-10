class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int Xor=0;
            int n=nums.size(),i;
            for(i=0; i<n; i++){
                Xor^=nums[i];
            }
            return Xor;
        }
    };