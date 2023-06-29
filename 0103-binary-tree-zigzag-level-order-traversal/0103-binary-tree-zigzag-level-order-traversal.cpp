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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        bool leftToRightFlg = true;
        q.push(root);
        while(!q.empty()){
            int sizeOfLvl = q.size();
            vector<int> row(sizeOfLvl);
            for(int i=0;i<sizeOfLvl;i++){
                TreeNode * node = q.front();
                q.pop();
                int index = (leftToRightFlg) ? i : sizeOfLvl-i-1;
                row[index] = node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            leftToRightFlg = !leftToRightFlg;
            ans.push_back(row);
        }
        return ans;
    }
};