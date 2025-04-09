class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            vector < int > v(26,0);
            for(char ch : magazine){
                v[ch-'a']++;
            }
            for(char ch : ransomNote){
                if(v[ch-'a']==0){
                    return false;
                }
                v[ch-'a']--;
            }
            return true;
        }
    };