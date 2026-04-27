#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int smallestSubstring(string s) {
        
        vector<int> freq(3, 0);
        int left = 0, count = 0;
        int ans = INT_MAX;

        for(int right = 0; right < s.size(); right++) {
            
            int idx = s[right] - '0';
            if(freq[idx] == 0) count++;
            freq[idx]++;

            while(count == 3) {
                ans = min(ans, right - left + 1);

                int lidx = s[left] - '0';
                freq[lidx]--;
                if(freq[lidx] == 0) count--;

                left++;
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};