#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int totalWays(vector<int>& arr, int target) {
        
        int total = accumulate(arr.begin(), arr.end(), 0);

        if(abs(target) > total) return 0;
        if((total + target) % 2 != 0) return 0;

        int sum = (total + target) / 2;

        vector<int> dp(sum + 1, 0);
        dp[0] = 1;

        for(int num : arr) {
            for(int j = sum; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[sum];
    }
};
