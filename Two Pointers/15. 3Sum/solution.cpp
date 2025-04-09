#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        using namespace std;
        int n = nums.size(),i,j,k=0,l,r;
        vector<vector<int>> resf;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(i=0; i<n-2; i++){
            l=i+1;
            r=n-1;
            while(l<r){
                if((nums[i]+nums[l]+nums[r])<0)
                    l++;
                else if((nums[i]+nums[l]+nums[r])>0)
                    r--;
                else{
                    
                    vector<int>res;
                    res.push_back(nums[i]);
                    res.push_back(nums[l]);
                    res.push_back(nums[r]);
                    
                    s.insert(res);
                    l++;
                    
                    while(nums[l]==nums[l-1]&&l<r)
                        l++;
                    //cout << i << " " << l <<" "<<r<<endl;
                    
                }
            }
        }
        set<vector<int>>::iterator it;
        for(it=s.begin();it!=s.end();it++){
            resf.push_back(*it);
        }
        return resf;
    }
};