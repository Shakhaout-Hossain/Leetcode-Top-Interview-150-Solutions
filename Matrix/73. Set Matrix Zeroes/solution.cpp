class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int m=matrix.size(),n=matrix[0].size();
            int x=1,y=1,i,j;
            for(i=0; i<m; i++){
                if(matrix[i][0]==0)y=0;
            }
            for(i=0; i<n; i++){
                if(matrix[0][i]==0)x=0;
            }
            for(i=1; i<m; i++){
                for(j=1; j<n; j++){
                    if(matrix[i][j]==0){
                        matrix[0][j]=0;
                        matrix[i][0]=0;
                    }
                }
            }
            for(i=1; i<m; i++){
                if(matrix[i][0]==0){
                    for(j=1; j<n; j++){
                        matrix[i][j]=0;                    
                    }
                }     
            }
            for(j=1; j<n; j++){
                if(matrix[0][j]==0){
                    for(i=1; i<m; i++){
                        matrix[i][j]=0;                    
                    }
                }     
            }
            if(x==0){
                for(i=0; i<n; i++)matrix[0][i]=0;
            }
            if(y==0){
                for(i=0; i<m; i++)matrix[i][0]=0;
            }
        }
    };