class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int n=s.size(),m=t.size(),i,j;
            for(i=0,j=0; i<n&&j<m; j++){
                if(s[i]==t[j]){
                    i++;
                }
            }
            if(i==n)return true;
            else return false;
        }
    };