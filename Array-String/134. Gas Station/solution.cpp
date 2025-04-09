class Solution {
    public:
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            int n=gas.size(),i,k=0,t=0;
                
            for(i=0; i<n; i++){
                if(t+gas[i]<cost[i]||t<0){
                    k=i+1;
                    t=0;            
                }
                else{               
                    t+=(gas[i]-cost[i]);                
                }
            }
            for(int j=0; j<k; j++){
                 if(t+gas[j]<cost[j]||t<0){
                    return -1;           
                }
                else{               
                    t+=(gas[j]-cost[j]);                
                }
            }
            if(t>=0&&k<n)return k;
            else return -1;
        }
    };