#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        unordered_set<int> st(arr.begin(), arr.end());
        vector<int> res;

        for (int num = low; num <= high; num++) {
            if (st.find(num) == st.end()) {
                res.push_back(num);
            }
        }

        return res;
    }
};
