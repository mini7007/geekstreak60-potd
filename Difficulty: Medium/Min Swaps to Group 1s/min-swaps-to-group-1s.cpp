#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        
        int n = arr.size();

        int ones = 0;
        for(int x : arr) if(x == 1) ones++;

        if(ones == 0) return -1;

        int zeros = 0;

        // first window
        for(int i = 0; i < ones; i++) {
            if(arr[i] == 0) zeros++;
        }

        int ans = zeros;

        // slide window
        for(int i = ones; i < n; i++) {
            
            if(arr[i] == 0) zeros++;
            if(arr[i - ones] == 0) zeros--;

            ans = min(ans, zeros);
        }

        return ans;
    }
};