/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(!root or root==p or root==q) return root;
//         if((root->val > p->val) and (root->val > q->val)) return lowestCommonAncestor(root->left, p, q);
//         if((root->val < p->val) and (root->val < q->val)) return lowestCommonAncestor(root->right, p, q);
        
//         return root;
        
        
        TreeNode* curr = root;
        while(curr){
            if((p->val > curr->val) and (q->val > curr->val)) curr = curr->right;
            else if((p->val < curr->val) and (q->val < curr->val)) curr = curr->left;
            else return curr;
        }
        
        return curr;
        
    }
};