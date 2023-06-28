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
    pair<int, int> diameterFast(TreeNode * root){
        if(!root){
            pair<int, int> ans= make_pair(0,0);
            return ans;
        }
        pair<int,int> res;// diameter, height
        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);
        
        int dl = left.first;
        int dr = right.first;
        int curr = left.second + right.second;
        res.first = max(curr, max(dr,dl));//diameter
        res.second = max(left.second, right.second)+1;//height
        return res;
    }
    int diameterOfBinaryTree(TreeNode* root) {
       return diameterFast(root).first;
    }
};