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
        //use a queue for storing the left and right nodes
        vector<vector<int>> res;
        if(root == nullptr) return res;
        queue<TreeNode*> qt;
        
        qt.push(root);
        while(!qt.empty()){
            int lvl_size = qt.size();
            vector<int> lvlNodes;
            for(int i = 0; i < lvl_size; i++){
                TreeNode * curr = qt.front();
                qt.pop();
                if(curr->left) qt.push(curr->left);
                if(curr->right) qt.push(curr->right);
                lvlNodes.push_back(curr->val);
            }
            res.push_back(lvlNodes);
        }
        
        return res;
        
    }
};