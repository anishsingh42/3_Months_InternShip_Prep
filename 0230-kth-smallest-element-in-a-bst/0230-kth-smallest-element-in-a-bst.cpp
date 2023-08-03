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
    void solve(TreeNode* root, int k, vector<int>&arr){
        if(!root) return;
        
        solve(root->left, k, arr);
        arr.push_back(root->val);
        solve(root->right, k, arr);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> smallEle;
        solve(root, k, smallEle);
        return smallEle[k-1];
    }
};