class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            int i,j;
            for(i=0; i<9; i++){
                int a[10]={0},b[10]={0};
                for(j=0; j<9; j++){
                    if(board[i][j]!='.'){
                        a[board[i][j]-'1']++;
                        if(a[board[i][j]-'1']>1)return false;
                    }
                    if(board[j][i]!='.'){
                        b[board[j][i]-'1']++;
                        if(b[board[j][i]-'1']>1)return false;
                    }
                }
            }
            for(j=0; j<9; j+=3){
                for(i=0; i<9; i+=3){
                    int a[10]={0};
                    //cout << "hello";
                    for(int k=i;k<i+3; k++){
                        for(int m=j; m<j+3; m++){
                            if(board[k][m]!='.'){
                            a[board[k][m]-'1']++;
                            //cout <<"hello"<<endl;
                            if(a[board[k][m]-'1']>1)return false;}
                        }
                    }
                }
            }
            return true;
        }
    };