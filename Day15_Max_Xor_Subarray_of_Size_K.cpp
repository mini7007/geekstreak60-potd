#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        
        int currXor = 0;
        
        // first window
        for (int i = 0; i < k; i++) {
            currXor ^= arr[i];
        }
        
        int maxXor = currXor;

        // sliding window
        for (int i = k; i < n; i++) {
            currXor ^= arr[i - k];
            currXor ^= arr[i];
            
            maxXor = max(maxXor, currXor);
        }

        return maxXor;
    }
};
