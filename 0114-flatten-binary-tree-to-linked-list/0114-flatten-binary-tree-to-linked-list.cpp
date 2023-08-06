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
    void flatten(TreeNode* root) {
        if(root){
            TreeNode* tempRight = root->right;
            root->right = root->left;
            root->left = nullptr;
            
            
            //last node of the left attach with the tempRight
            TreeNode * node = root;
            
            while(node->right){node = node->right;}
            
            node->right = tempRight;
            flatten(root->right);
        }
        
        return;
    }
};