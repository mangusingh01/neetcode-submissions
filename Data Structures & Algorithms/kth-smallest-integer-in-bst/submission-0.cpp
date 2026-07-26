/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void solve(TreeNode* node, vector<int> &arr) {
        if(!node) return; 

        solve(node->left, arr); 
        arr.push_back(node->val); 
        solve(node->right, arr); 
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr; 
        solve(root, arr); 

        return arr[k-1]; 
    }
};
