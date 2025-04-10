class Solution {
    public:
        int maxPoints(vector<vector<int>>& points) {
            int x, y;
            int sz= points.size();
            int mx=1,i,j,k,p,q;
            //cout << sz << endl;
            for(i=0; i<sz; i++)
            {
                for(j=i+1; j<sz; j++)
                {
                    int c=2;
                    
                        x = points[i][0]-points[j][0];
                        y = points[i][1]-points[j][1];
                        //cout << i << endl;
                        if(x==0&&y==0)continue;
                        for( k=j+1; k<sz ; k++)
                        {
                            if(i!=k){
                                p = points[i][0]-points[k][0];
                                q = points[i][1]-points[k][1];
                                if(x*q==y*p){c++;}
            
        
                            }
                        }
                      
                    
                    mx = max(mx,c);
                    c=2;
                }
            }
            return mx;
        }
    };