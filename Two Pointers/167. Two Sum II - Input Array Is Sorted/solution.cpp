class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int n=numbers.size(),i=0,j=n-1;
            
            while(i<j){
                int k=numbers[i]+numbers[j];
                if(target==k){
                    return {i+1,j+1};
                }
                else if(target>k){
                    i++;
                }
                else j--;
            }
            return {i+1,j+1};
        }
    };