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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootindx = 0;
        return build(preorder, inorder, rootindx, 0, inorder.size()-1);
    }
    
    TreeNode* build(vector<int>&pre, vector<int>&in, int &rootindx, int left, int right){
        if(left > right) return NULL;
        int pivot = left;
        while(in[pivot] != pre[rootindx]) pivot++;
        
        rootindx++;
        
        TreeNode * newRootNode = new TreeNode(in[pivot]);
        newRootNode->left = build(pre,in,rootindx,left,pivot-1);
        newRootNode->right = build(pre,in,rootindx,pivot+1,right);
        return newRootNode;
    }
};