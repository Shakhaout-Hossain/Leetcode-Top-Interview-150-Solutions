class Solution {
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        if (a.first < b.first) {
            return true;
        } else if (a.first == b.first && a.second > b.second) {
            return true;
        }
        return false;
    }
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();  
        vector<pair<int, int>> v;  
        
        for (int i = 0; i < n; i++) {
            v.push_back({capital[i], profits[i]});
        }
        
        sort(v.begin(), v.end(), cmp);
        
        priority_queue<int> pq;
        int j = 0;  
        for (int i = 0; i < k; i++) {
            while (j < n && v[j].first <= w) {
                pq.push(v[j].second);
                j++;
            }
            if (!pq.empty()) {
                w += pq.top();
                pq.pop();
            } else {
                break;
            }
        }
        return w;
    }
};