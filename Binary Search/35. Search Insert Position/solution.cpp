class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
           return binarySearch(nums,target,0,nums.size()-1); 
        }
        int binarySearch(vector<int>& nums, int target, int s, int e){
            if(nums[e]<target)return e+1;
            int mid=s + (e-s)/2;;
            while(s<e){
                mid = s + (e-s)/2;
                if(nums[mid]==target)return mid;
                if(nums[mid]<target){
                    s=mid+1;
                    
                }
                else{
                    e=mid;
                   
                }
            }
            
            return s;
        }
    };