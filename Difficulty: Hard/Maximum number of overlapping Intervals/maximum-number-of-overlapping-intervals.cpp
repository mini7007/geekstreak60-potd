#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        
        vector<pair<int,int>> events;

        for(auto &it : arr) {
            int l = it[0], r = it[1];
            events.push_back({l, +1});
            events.push_back({r + 1, -1});
        }

        sort(events.begin(), events.end());

        int curr = 0, ans = 0;

        for(auto &e : events) {
            curr += e.second;
            ans = max(ans, curr);
        }

        return ans;
    }
};