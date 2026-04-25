#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        
        vector<int> st;

        for(int x : arr) {
            
            bool removed = false;

            while(!st.empty() && ((st.back() > 0 && x < 0) || (st.back() < 0 && x > 0))) {
                
                int top = st.back();

                if(abs(top) > abs(x)) {
                    removed = true;
                    break;
                }
                else if(abs(top) < abs(x)) {
                    st.pop_back();
                }
                else {
                    st.pop_back();
                    removed = true;
                    break;
                }
            }

            if(!removed) {
                st.push_back(x);
            }
        }

        return st;
    }
};