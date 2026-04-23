#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        
        long long total = 0;
        for(int x : arr) total += x;

        if(total % 2 != 0) return false;

        long long target = total / 2;
        long long prefix = 0;

        for(int x : arr) {
            prefix += x;
            if(prefix == target) return true;
        }

        return false;
    }
};