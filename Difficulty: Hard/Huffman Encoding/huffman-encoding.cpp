#include <bits/stdc++.h>
using namespace std;

struct Node {
    int freq;
    int idx;
    Node *left, *right;

    Node(int f, int i) {
        freq = f;
        idx = i;
        left = right = NULL;
    }
};

struct cmp {
    bool operator()(Node* a, Node* b) {
        if (a->freq == b->freq)
            return a->idx > b->idx;  // smaller index first
        return a->freq > b->freq;
    }
};

class Solution {
  public:

    void preorder(Node* root, string code, vector<string> &ans) {
        if (!root) return;

        if (!root->left && !root->right) {
            ans.push_back(code);
            return;
        }

        preorder(root->left, code + "0", ans);
        preorder(root->right, code + "1", ans);
    }

    vector<string> huffmanCodes(string &s, vector<int> f) {

        int n = s.size();
        priority_queue<Node*, vector<Node*>, cmp> pq;

        for (int i = 0; i < n; i++) {
            pq.push(new Node(f[i], i));
        }

        while (pq.size() > 1) {
            Node* left = pq.top(); pq.pop();
            Node* right = pq.top(); pq.pop();

            // IMPORTANT FIX HERE
            Node* merged = new Node(left->freq + right->freq,
                                    min(left->idx, right->idx));

            merged->left = left;
            merged->right = right;

            pq.push(merged);
        }

        vector<string> ans;

        if (n == 1) {
            ans.push_back("0");
            return ans;
        }

        preorder(pq.top(), "", ans);

        return ans;
    }
};