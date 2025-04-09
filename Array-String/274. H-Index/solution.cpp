class Solution {
    public:
        int hIndex(vector<int>& citations) {
            int n=citations.size(),i,ans=0;
            sort(citations.begin(),citations.end());
            for(i=n-1;i>=0; i--){
                if(citations[i]<=ans){
                    return ans;
                }
                ans++;
                //ans=citations[i];
            }
            return ans;
        }
    };