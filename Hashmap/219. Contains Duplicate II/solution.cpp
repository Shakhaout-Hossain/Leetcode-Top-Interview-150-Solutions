class Solution {
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            unordered_set<int>ms;
            int n = nums.size(),i;
            for(i=0; i<n; i++){
                if(ms.find(nums[i])!=ms.end())return true;
                else ms.insert(nums[i]);
                if(i>=k)ms.erase(nums[i-k]);
            }
            return false;
        }
    };