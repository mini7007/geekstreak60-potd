#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canFormPalindrome(string &s) {
        
        vector<int> freq(26, 0);

        for(char c : s) {
            freq[c - 'a']++;
        }

        int odd = 0;

        for(int x : freq) {
            if(x % 2 != 0) odd++;
        }

        return odd <= 1;
    }
};