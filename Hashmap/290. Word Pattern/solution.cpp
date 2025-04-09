class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            map<string, bool>mp;
            map<char, string>mpp;
            string p="";
            int n= pattern.size();
            int i=0;
            for(char c: s){
                if(c==' '){
                    if(mpp.find(pattern[i])!=mpp.end()){
                        if(mpp[pattern[i]]!=p)return false;
                    }
                    else{
                        if(mp[p]==true)return false;
                        mpp[pattern[i]]=p;
                        mp[p]=true;
                    }
                    p="";
                    i++;
                    if(i>=n)return false;
                }
                else p+=c;
            }
            if(mpp.find(pattern[i])!=mpp.end()){
                        if(mpp[pattern[i]]!=p)return false;
                    }
            else{
                if(mp[p]==true)return false;
            }
            if(i<n-1)return false;
            return true;
        }
    };