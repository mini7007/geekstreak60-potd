#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        if (s1.size() != s2.size()) return false;

        vector<int> map1(256, -1), map2(256, -1);

        for (int i = 0; i < s1.size(); i++) {
            char c1 = s1[i];
            char c2 = s2[i];

            // if mapping exists, it must match
            if (map1[c1] != -1 && map1[c1] != c2) return false;
            if (map2[c2] != -1 && map2[c2] != c1) return false;

            // create mapping
            map1[c1] = c2;
            map2[c2] = c1;
        }

        return true;
    }
};
