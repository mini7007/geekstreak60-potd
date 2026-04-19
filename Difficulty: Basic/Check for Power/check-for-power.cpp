#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPower(int x, int y) {
        
        // Edge cases
        if(y == 1) return true;
        if(x == 1) return (y == 1);

        while(y % x == 0) {
            y /= x;
        }

        return (y == 1);
    }
};