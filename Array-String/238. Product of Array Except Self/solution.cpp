class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n=nums.size(),i,p=1;
            vector <int>v(n);
            for(i=0;i<n-1; i++){
                p*=nums[i];
                v[i]=p;
            }
            p=1;
            for(i=n-1; i>0; i--){
                v[i]=v[i-1]*p;
                p*=nums[i];
            }
            v[0]=p;
            return v;
        }
    };