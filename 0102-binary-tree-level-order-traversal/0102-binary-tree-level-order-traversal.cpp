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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //similar to bfs
        vector<vector<int>> ans;
        if(!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sizeOfLevel = q.size();
            vector<int>lvl;
            for(int i=0;i<sizeOfLevel;i++){
                TreeNode*node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                lvl.push_back(node->val);
            }ans.push_back(lvl);
        }
        return ans;
    }
};