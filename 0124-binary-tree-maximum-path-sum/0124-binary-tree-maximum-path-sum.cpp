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
    int solve(TreeNode* root, int &ans){
        if(!root) return 0;
        
        int leftPath = root->val + solve(root->left, ans);
        int rightPath = root->val + solve(root->right, ans);
        
        ans = max({
            ans, 
            root->val,
            leftPath,
            rightPath,
            leftPath + rightPath - root->val
        });
        
        return max({leftPath, rightPath, root->val});
            
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        solve(root,ans);
        return ans;
    }
};