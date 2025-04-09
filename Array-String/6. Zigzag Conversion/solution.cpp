class Solution {
    public:
        string convert(string s, int numRows) {
            vector <string>p(numRows);
            string ans;
            int n=s.size(),i,k=1,f=0;
            if(n<1||numRows==1)return s;
            p[0]=s[0];
            for(i=1; i<n; i++){
                p[k]+=s[i];
               // cout << k << endl;
                if(k==0||k==numRows-1){
                   if(f==0)f=1;
                   else f=0;
                }
                if(f==0)k++;
                else k--;
            } 
            for(i=0;i<numRows;i++){
                ans+=p[i];
            }
            return ans;
        }
    };