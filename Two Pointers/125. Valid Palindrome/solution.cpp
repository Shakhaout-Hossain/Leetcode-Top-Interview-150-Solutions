class Solution {
    public:
        bool isPalindrome(string s) {
            int n=s.size(),i,j;
            j=n-1;
            for(i=0; i<j;){
                if(!isalnum(s[i])){i++;continue;}
                if(!isalnum(s[j])){j--;continue;}
                if(tolower(s[i])!=tolower(s[j]))return false;
                else {
                    i++;j--;
                }
            }
            
            return true;
        }
    };