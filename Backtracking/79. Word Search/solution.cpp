class Solution {
    public:
        int a[4]={-1,0,1,0};
    int b1[4]={0,1,0,-1};
        bool dfs(int i,int j,int n,int m,int in,vector<vector<char>>&b,string s){
            if(in==s.size()){
                return true;
            }
            if(i<0||j<0||i>=n||j>=m||b[i][j]!=s[in]||b[i][j]=='?'){
                return false;
            }
            char ch=b[i][j];
            b[i][j]='?';
            for(int k=0;k<4;k++){
                if(dfs(i+a[k],j+b1[k],n,m,in+1,b,s)==true)return true;
            }
            b[i][j]=ch;
            return false;
            
        }
        bool exist(vector<vector<char>>& board, string word) {
         int c=0;
            int n=board.size();
            int m=board[0].size();
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(board[i][j]==word[0]){
                      if(dfs(i,j,n,m,0,board,word)){
                        return true;
                      }
                    }
                }
            }
            return false;   
        }
    };