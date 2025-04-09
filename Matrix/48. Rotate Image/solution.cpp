class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size(),i,j,x;
            //transpose matrix
            for(i=0; i<n; i++){
                for(j=i; j<n; j++){
                    x=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=x;
                }
            }
            //column reverse
            int k=n-1;
            for(i=0; i<n; i++){
                k=n-1;
                for(j=0; j<n/2; j++){
                    x=matrix[i][j];
                    matrix[i][j]=matrix[i][k];
                    matrix[i][k]=x;
                    k--;
                }
             
            }
            //cout << n << endl;
        }
    };