#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int n) {
        
        if(n == 0) return -1;

        // Check if only one set bit
        if((n & (n - 1)) != 0) return -1;

        int pos = 1;

        while(n > 1) {
            n = n >> 1;
            pos++;
        }

        return pos;
    }
};