class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            map < string, int> mp;
            int n=strs.size(), i;
            vector<string> s=strs;
            for(i=0; i<n; i++){
                sort(s[i].begin(), s[i].end());
            }
            int p=0;
            vector<vector<string>>ans;
            for(i=0; i<n; i++){
                //cout << s[i] << endl;
                if(mp.find(s[i])!=mp.end()){
                    //cout << strs[i] << endl;
                    ans[mp[s[i]]].push_back(strs[i]);
                }
                else{
                    vector < string >v;
                    v.push_back(strs[i]);
                    mp[s[i]]=p;
                    p++;
                    ans.push_back(v);
                }
            }
            
            return ans;
        }
    };