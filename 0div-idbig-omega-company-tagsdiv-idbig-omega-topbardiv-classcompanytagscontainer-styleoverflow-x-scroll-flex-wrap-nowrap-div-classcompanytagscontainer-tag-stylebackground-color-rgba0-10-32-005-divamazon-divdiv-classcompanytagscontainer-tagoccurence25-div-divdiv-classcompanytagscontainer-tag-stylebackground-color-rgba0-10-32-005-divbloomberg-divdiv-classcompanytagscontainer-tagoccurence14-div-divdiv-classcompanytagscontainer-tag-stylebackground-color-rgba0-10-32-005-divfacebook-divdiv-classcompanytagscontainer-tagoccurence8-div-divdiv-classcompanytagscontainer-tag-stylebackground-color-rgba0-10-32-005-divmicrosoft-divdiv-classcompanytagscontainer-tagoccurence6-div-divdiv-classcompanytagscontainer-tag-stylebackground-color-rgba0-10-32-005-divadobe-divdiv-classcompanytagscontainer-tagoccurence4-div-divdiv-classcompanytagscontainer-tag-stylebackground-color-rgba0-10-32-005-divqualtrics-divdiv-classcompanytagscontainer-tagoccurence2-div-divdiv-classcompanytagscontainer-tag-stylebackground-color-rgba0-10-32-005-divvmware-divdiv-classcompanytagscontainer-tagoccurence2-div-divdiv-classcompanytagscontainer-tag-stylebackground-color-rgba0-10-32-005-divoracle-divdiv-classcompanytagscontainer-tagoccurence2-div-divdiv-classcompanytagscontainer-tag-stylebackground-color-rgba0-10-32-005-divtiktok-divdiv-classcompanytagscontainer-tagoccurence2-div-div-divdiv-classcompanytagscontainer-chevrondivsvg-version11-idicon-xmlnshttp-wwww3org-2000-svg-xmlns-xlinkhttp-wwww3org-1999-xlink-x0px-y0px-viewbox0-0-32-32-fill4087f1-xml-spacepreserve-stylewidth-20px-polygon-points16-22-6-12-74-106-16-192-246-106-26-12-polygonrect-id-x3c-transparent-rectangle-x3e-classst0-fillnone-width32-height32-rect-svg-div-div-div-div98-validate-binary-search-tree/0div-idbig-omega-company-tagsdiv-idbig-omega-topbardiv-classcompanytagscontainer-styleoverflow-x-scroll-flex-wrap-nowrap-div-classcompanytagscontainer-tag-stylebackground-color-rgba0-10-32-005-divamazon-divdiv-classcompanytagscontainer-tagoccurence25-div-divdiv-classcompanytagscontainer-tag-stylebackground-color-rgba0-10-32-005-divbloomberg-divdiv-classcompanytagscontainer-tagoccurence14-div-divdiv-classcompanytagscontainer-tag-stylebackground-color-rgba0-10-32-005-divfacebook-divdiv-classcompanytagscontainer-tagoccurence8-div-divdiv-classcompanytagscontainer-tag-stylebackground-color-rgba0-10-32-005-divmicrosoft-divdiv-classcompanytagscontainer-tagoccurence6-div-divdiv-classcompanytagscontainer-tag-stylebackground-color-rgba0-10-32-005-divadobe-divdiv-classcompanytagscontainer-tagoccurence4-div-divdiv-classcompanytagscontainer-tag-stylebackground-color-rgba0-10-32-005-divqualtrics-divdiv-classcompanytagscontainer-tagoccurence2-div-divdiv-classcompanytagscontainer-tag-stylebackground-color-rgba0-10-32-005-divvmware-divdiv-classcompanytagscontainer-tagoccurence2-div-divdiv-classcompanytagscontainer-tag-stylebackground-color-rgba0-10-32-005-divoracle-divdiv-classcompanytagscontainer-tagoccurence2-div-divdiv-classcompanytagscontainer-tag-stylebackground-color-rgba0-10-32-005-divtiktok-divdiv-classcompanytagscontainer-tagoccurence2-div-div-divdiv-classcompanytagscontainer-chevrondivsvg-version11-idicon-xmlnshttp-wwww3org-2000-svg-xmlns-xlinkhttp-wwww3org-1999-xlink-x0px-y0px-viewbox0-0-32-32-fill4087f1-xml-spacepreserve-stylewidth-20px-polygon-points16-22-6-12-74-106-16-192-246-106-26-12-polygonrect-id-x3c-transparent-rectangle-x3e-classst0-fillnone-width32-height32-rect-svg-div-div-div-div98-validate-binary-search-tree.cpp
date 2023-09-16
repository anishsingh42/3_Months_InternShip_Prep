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
        return check_valid_BST(root, nullptr, nullptr);
    }
    
    bool check_valid_BST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode){
        if(root == nullptr) return true;
        
        if((minNode and root->val <= minNode->val) or (maxNode and root->val >= maxNode->val)) return false;
        
        return check_valid_BST(root->left, minNode, root) and check_valid_BST(root->right, root, maxNode);
    }
};