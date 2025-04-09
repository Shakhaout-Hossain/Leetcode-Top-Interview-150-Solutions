class Solution {
    public:
        bool isAnagram(string s, string t) {
            int n=s.size(),m=t.size(),i,a[27]={0},b[27]={0};
            for(i=0; i<n; i++){
                a[s[i]-'a']++;
            }
            for(i=0; i<m; i++){
                b[t[i]-'a']++;
            }
            for(i=0; i<26; i++){
                if(a[i]!=b[i])return false;
            }
            return true;
        }
    };