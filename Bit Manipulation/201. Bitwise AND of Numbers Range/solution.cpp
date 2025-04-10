class Solution {
    public:
        int rangeBitwiseAnd(int left, int right) {
            int ans=0,i;
            for(i=31; i>=0;i--){
                if(((1<<i)&left)&&((1<<i)&right)){
                    ans|=(1<<i);
                    
                }
                else if(((1<<i)&left)||((1<<i)&right)) break;
            }
            return ans;
        }
    };