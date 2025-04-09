class Solution {
    public:
        int jump(vector<int>& nums) {
            int jmp=0,cur=0,mx=0,i,n=nums.size()-1;
            for(i=0; i<n; i++){
                mx=max(mx, nums[i]+i);
                if(cur==i){
                    jmp++;
                    cur=mx;
                }
            } 
            return jmp; 
        }
    };