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
    private:
        int i = 0;
    public:
        TreeNode* solve(vector<int>&pre, int max_val = INT_MAX){
            if(i == pre.size() || pre[i] > max_val) return nullptr;
            
            TreeNode * root = new TreeNode(pre[i++]);
            
            root->left = solve(pre,root->val);
            root->right = solve(pre, max_val);
            
            return root;

        }
        TreeNode* bstFromPreorder(vector<int>& preorder) {
            return solve(preorder);
        }
};