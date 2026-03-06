#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string minWindow(string &s, string &p) {
        vector<int> need(26, 0);
        vector<int> window(26, 0);

        for(char c : p)
            need[c - 'a']++;

        int required = p.size();
        int left = 0, right = 0;
        int start = 0, minLen = INT_MAX;

        while(right < s.size()) {
            char c = s[right];
            window[c - 'a']++;

            if(need[c - 'a'] >= window[c - 'a'])
                required--;

            while(required == 0) {
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char lc = s[left];
                window[lc - 'a']--;

                if(need[lc - 'a'] > window[lc - 'a'])
                    required++;

                left++;
            }

            right++;
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};
