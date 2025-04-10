class Solution {
    public:
        string addBinary(string a, string b) {
            string p;
            int n=a.size(),m=b.size();
            int i=n-1,j=m-1, c=0;
            while(i>=0&&j>=0){
                if(a[i]==b[j]){
                    if(a[i]=='1'){
                        p+=('0'+c);
                        c=1;
                    }
                    else{
                        p+=('0'+c);
                        c=0;
                    }
                }
                else{
                    if(c>0){p+='0';c=1;}
                    else {p+='1';}
                }
                i--;
                j--;
            }
            //cout << p << endl;
            while(i>=0){
                if(a[i]=='0'){
                    p+=(c+'0');
                    c=0;
                }
                else{
                    if(c==1){
                        p+='0';
                        c=1;
                    }
                    else{
                        p+='1';
                    }
                }
                i--;
            }
            while(j>=0){
                if(b[j]=='0'){
                    p+=(c+'0');
                    c=0;
                }
                else{
                    if(c==1){
                        p+='0';
                        c=1;
                    }
                    else{
                        p+=b[j];
                    }
                }
                j--;
            }
            if(c>0)p+='1';
            reverse(p.begin(), p.end());
            return p;
        }
    };