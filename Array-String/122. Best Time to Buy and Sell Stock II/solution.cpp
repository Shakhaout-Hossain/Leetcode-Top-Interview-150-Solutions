class Solution {
    public:
        int maxProfit(vector<int>& prices) {
         int n=prices.size()-1, p=0;
            for( int i=0; i<n; i++){
                if(prices[i]<prices[i+1]){
                    p+=(prices[i+1]-prices[i]);
                }
            }
        return p;
        }
    };