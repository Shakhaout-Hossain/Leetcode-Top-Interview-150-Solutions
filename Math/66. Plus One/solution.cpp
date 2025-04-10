class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n = digits.size(),i;
            if(digits[n-1]<9){
                digits[n-1]++;
                
            }
            else{
                for(i=n-1; i>=0; i--){
                    if(digits[i]>8)digits[i]=0;
                    else {
                        digits[i]++;
                        break;
                    }
                }
                if(digits[0]==0)digits.insert(digits.begin(),1);
            }
            return digits;
        }
    };