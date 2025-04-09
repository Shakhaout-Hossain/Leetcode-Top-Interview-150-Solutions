class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size(),i,p=0,mn=prices[0];
            for(i=1; i<n; i++){
                
                if(prices[i]<mn)mn=prices[i];
                else {
                if(prices[i]-mn>p)p=prices[i]-mn;
                }
            }
            return p;
        }
    };