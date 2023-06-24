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
    void findingInorder(TreeNode* root, vector<int> &ans){
        if(!root) return;
        //left->root->right
        findingInorder(root->left, ans);
        ans.push_back(root->val);
        findingInorder(root->right, ans);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        findingInorder(root,ans);
        return ans;
    }
};