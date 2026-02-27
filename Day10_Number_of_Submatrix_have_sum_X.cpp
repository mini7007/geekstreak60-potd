#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquare(vector<vector<int>>& mat, int x) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<long long>> pref(n + 1, vector<long long>(m + 1, 0));

        // build prefix sum
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                pref[i][j] = mat[i-1][j-1]
                           + pref[i-1][j]
                           + pref[i][j-1]
                           - pref[i-1][j-1];
            }
        }

        int count = 0;

        // try all square sizes
        for (int len = 1; len <= min(n, m); len++) {
            for (int i = len; i <= n; i++) {
                for (int j = len; j <= m; j++) {
                    long long sum =
                        pref[i][j]
                      - pref[i-len][j]
                      - pref[i][j-len]
                      + pref[i-len][j-len];

                    if (sum == x) count++;
                }
            }
        }

        return count;
    }
};
