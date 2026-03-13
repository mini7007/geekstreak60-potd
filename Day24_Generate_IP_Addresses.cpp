#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    bool valid(string &s){
        if(s.size() > 1 && s[0] == '0') return false;
        int val = stoi(s);
        return val >= 0 && val <= 255;
    }

    void solve(string &s, int idx, int parts, string curr, vector<string> &ans){
        
        if(parts == 4 && idx == s.size()){
            curr.pop_back(); // remove last dot
            ans.push_back(curr);
            return;
        }

        if(parts == 4 || idx == s.size()) return;

        for(int len = 1; len <= 3 && idx + len <= s.size(); len++){
            string part = s.substr(idx, len);
            
            if(valid(part)){
                solve(s, idx + len, parts + 1, curr + part + ".", ans);
            }
        }
    }

    vector<string> generateIp(string &s) {
        vector<string> ans;
        solve(s, 0, 0, "", ans);
        return ans;
    }
};
