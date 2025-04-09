class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            int n=s.size(),i;
            vector<int>indS(256,0);        
            vector<int>indT(256,0);
    
            for(i=0;i<n;i++){
                if(indS[s[i]]!=indT[t[i]]){
                    return false;
                }
                indS[s[i]]=i+1;            
                indT[t[i]]=i+1;
            }
            return true;
        }
    };