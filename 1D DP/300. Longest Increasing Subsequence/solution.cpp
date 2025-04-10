class Solution {
    public:
        int lengthOfLIS(vector<int>& nums) {
            int n = nums.size(), i, j;
            vector < int > a(n+2, 1);
            for(i=1; i<n; i++){
            for(j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    a[i] = max(a[i], a[j]+1);
                    //cout << a[i] << endl;
                    }
                }
             }
        int mx=0;
        for(i=0; i<n; i++){
            //mx = max(mx, a[i]);
            if(mx<a[i])mx=a[i];
        }
          return mx;  
        }
    };