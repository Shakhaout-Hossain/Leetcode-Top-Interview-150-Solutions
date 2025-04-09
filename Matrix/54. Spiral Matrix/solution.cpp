class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int m=matrix.size(),n=matrix[0].size(),i,j;
            vector < int > v;
            int Top=0,Down=m-1,Left=0,Right=n-1,Dir=0;
            while(Top<=Down&&Left<=Right){
               // cout << Top << " " << Down << " " << Left << " "<< Right<<endl;
                if(Dir==0){
                    for(i=Left; i<=Right; i++){
                        v.push_back(matrix[Top][i]);
                    }
                    Top++;
                }
                else if(Dir==1){
                    for(i=Top; i<=Down; i++){
                        v.push_back(matrix[i][Right]);
                    }
                    Right--;
                }
                else if(Dir==2){
                    for(i=Right; i>=Left; i--){
                        v.push_back(matrix[Down][i]);
                    }
                    Down--;
                }
                else if(Dir==3){
                    for(i=Down; i>=Top; i--){
                        v.push_back(matrix[i][Left]);
                    }
                    Left++;
                }
                Dir++;
                Dir%=4;
                
            }
            
            return v;
        }
    };