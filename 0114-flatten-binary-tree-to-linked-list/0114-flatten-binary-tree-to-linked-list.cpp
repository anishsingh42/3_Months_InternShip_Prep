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
    void inorder(TreeNode* root, vector<TreeNode*> & arr){
        if(!root) return;
        
        arr.push_back(root);
        inorder(root->left, arr);
        inorder(root->right, arr);
        
        return;
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        vector<TreeNode*> arr;
        inorder(root, arr);
        
        for(int i=0;i<arr.size()-1;i++){
            arr[i]->left = nullptr;
            arr[i]->right = arr[i+1];
        }
        
        arr.back()->left = nullptr;
        arr.back()->right = nullptr;
        
        return;
    }
};