#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProfit(vector<int>& arr, int k) {
        
        int n = arr.size();
        int hold = -arr[0];
        int cash = 0;

        for(int i = 1; i < n; i++) {
            int newHold = max(hold, cash - arr[i]);
            int newCash = max(cash, hold + arr[i] - k);

            hold = newHold;
            cash = newCash;
        }

        return cash;
    }
};
