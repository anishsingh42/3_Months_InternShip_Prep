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
    bool isValidBST(TreeNode* root) {
        return validBSTCheck(root, nullptr, nullptr);
    }
    bool validBSTCheck(TreeNode*root, TreeNode* minNode, TreeNode *maxNode){
        if(!root) return 1;
        
        if((minNode and root->val <= minNode->val) or (maxNode and root->val >= maxNode->val))
            return 0;
        
        return validBSTCheck(root->left, minNode, root) and validBSTCheck(root->right, root, maxNode);
    }
};