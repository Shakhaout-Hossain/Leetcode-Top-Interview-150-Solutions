class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size(), i,j=0,mn=2000;
            //cout << n << endl;
            if(n==0)return "";
            if(n==1)return strs[0];
            string s;
            for(i=0; i<n; i++){if(strs[i].size()<mn)mn=strs[i].size();}
            while(j<mn){
                for(i=0; i<n-1; i++){
                    if(strs[i][j]!=strs[i+1][j]){
                        //cout << "Hello" << endl;
                        for(int k=0; k<j; k++){
                            s+=strs[0][k];       
                        }
                        return s;
                    }
    
                }
                j++;
                //cout << j << endl;
            }
            for(int k=0; k<j; k++){
                s+=strs[0][k];       
            }
            return s;
        }
    };