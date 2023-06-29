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
    bool getPath(TreeNode* root, TreeNode* node, vector<TreeNode*> &arr){
        if(!root) return 0;
        arr.push_back(root);
        if(root == node) return 1;
        if(getPath(root->left, node, arr) or getPath(root->right, node, arr)) return 1;
        arr.pop_back();
        return 0;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        vector<TreeNode*> arrP;
        vector<TreeNode*> arrQ;
        getPath(root, p, arrP);
        getPath(root, q, arrQ);
        TreeNode* lca = NULL;
        int i = 0;
        while (i < arrP.size() && i < arrQ.size() && arrP[i] == arrQ[i]) {
            lca = arrP[i];
            i++;
        }
        return lca;
    }
};