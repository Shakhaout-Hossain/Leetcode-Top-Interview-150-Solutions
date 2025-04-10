class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0)return false;
            long long n=0,v=x;
            while(v){
                n*=10;
                n+=(v%10);
                v/=10;
            }
            return (n==x);
        }
    };