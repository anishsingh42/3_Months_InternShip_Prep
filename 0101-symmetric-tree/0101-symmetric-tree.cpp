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
    bool isSymmetric(TreeNode* root) {
        //base case
        if(!root) return 1;
        return isMirror(root->left, root->right);
    }
    bool isMirror(TreeNode*leftBS, TreeNode*rightBS){
        if(!leftBS and !rightBS) return 1;
        if(!leftBS or !rightBS) return 0;
        
        return (leftBS->val == rightBS->val and 
               isMirror(leftBS->left, rightBS->right) and
               isMirror(leftBS->right, rightBS->left));
    }
};