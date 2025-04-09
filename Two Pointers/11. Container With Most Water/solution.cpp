class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n=height.size(),i=0,j=n-1,mx=0,k;
            while(i<j){
                if(height[i]<height[j]){
                    k=(j-i)*height[i];
                    if(k>mx)mx=k;
                    i++;
                }
                else{
                    k=(j-i)*height[j];
                    if(k>mx)mx=k;
                    j--;
                }
            }
            return mx;
        }
    };