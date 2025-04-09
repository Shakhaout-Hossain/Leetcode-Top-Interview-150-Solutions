class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.size(),i,j,k=0;
            if(n==1)return 1;
    
            int left=0,right=0;
            bool a[257]={false};
            for(right=0; right<n; right++){
                if(a[s[right]]==false)a[s[right]]=true;
                else{
                    k = max(k,right-left);
                    while(left<right){
                        if(s[left]!=s[right]){
                            a[s[left]]=false;
                        }
                        else{
                            left++;
                            break;
                        }
                        left++;
                    }
                    
                }
            }
            k = max(k,right-left);
            return k;
        }
    };