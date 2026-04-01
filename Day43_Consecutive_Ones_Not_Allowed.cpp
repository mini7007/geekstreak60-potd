#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countStrings(int n) {
        
        long long end0 = 1; // for length 1
        long long end1 = 1;

        for(int i = 2; i <= n; i++) {
            long long newEnd0 = end0 + end1;
            long long newEnd1 = end0;

            end0 = newEnd0;
            end1 = newEnd1;
        }

        return end0 + end1;
    }
};
