class Solution {
    public:
        uint32_t reverseBits(uint32_t n) {
            uint32_t ans=0;
            int i,j=0;
            for(i=31; i>=0; i--){
                if(n&(1<<i)){
                    ans=ans|(1<<j);
                    //j++;
                }
                j++;
                //else ans<<1;
            }
            return ans;
        }
    };