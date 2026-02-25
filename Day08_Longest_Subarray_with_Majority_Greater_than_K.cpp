#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        
        int prefix = 0;
        int maxLen = 0;

        for (int i = 0; i < arr.size(); i++) {
            // transform
            if (arr[i] > k) prefix += 1;
            else prefix -= 1;

            // case 1: whole prefix valid
            if (prefix > 0) {
                maxLen = i + 1;
            }

            // store first occurrence
            if (mp.find(prefix) == mp.end()) {
                mp[prefix] = i;
            }

            // case 2: check prefix-1
            if (mp.find(prefix - 1) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefix - 1]);
            }
        }

        return maxLen;
    }
};
