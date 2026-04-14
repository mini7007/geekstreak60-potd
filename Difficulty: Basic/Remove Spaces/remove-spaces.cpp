#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeSpaces(string& s) {
        
        int j = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ') {
                s[j++] = s[i];
            }
        }

        s.resize(j);
        return s;
    }
};