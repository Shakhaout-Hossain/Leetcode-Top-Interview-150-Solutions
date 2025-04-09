class Solution {
    public:
        string reverseWords(string s) {
            reverse(s.begin(),s.end());
            int n = s.size(),i=0,b=0,e=0;
            while(i<n){
                while(s[i]==' '){
                    i++;
                }
                while(i<n&&s[i]!=' '){
                    s[e++]=s[i++];
                }
               // cout << b << " " << e << endl;
                if(b<e){
                    reverse(s.begin()+b, s.begin()+e);
                    s[e++]=' ';
                    b=e;
                }
                i++;
            }
            if(e>0)s.resize(e-1);
            return s;
    
        }
    };