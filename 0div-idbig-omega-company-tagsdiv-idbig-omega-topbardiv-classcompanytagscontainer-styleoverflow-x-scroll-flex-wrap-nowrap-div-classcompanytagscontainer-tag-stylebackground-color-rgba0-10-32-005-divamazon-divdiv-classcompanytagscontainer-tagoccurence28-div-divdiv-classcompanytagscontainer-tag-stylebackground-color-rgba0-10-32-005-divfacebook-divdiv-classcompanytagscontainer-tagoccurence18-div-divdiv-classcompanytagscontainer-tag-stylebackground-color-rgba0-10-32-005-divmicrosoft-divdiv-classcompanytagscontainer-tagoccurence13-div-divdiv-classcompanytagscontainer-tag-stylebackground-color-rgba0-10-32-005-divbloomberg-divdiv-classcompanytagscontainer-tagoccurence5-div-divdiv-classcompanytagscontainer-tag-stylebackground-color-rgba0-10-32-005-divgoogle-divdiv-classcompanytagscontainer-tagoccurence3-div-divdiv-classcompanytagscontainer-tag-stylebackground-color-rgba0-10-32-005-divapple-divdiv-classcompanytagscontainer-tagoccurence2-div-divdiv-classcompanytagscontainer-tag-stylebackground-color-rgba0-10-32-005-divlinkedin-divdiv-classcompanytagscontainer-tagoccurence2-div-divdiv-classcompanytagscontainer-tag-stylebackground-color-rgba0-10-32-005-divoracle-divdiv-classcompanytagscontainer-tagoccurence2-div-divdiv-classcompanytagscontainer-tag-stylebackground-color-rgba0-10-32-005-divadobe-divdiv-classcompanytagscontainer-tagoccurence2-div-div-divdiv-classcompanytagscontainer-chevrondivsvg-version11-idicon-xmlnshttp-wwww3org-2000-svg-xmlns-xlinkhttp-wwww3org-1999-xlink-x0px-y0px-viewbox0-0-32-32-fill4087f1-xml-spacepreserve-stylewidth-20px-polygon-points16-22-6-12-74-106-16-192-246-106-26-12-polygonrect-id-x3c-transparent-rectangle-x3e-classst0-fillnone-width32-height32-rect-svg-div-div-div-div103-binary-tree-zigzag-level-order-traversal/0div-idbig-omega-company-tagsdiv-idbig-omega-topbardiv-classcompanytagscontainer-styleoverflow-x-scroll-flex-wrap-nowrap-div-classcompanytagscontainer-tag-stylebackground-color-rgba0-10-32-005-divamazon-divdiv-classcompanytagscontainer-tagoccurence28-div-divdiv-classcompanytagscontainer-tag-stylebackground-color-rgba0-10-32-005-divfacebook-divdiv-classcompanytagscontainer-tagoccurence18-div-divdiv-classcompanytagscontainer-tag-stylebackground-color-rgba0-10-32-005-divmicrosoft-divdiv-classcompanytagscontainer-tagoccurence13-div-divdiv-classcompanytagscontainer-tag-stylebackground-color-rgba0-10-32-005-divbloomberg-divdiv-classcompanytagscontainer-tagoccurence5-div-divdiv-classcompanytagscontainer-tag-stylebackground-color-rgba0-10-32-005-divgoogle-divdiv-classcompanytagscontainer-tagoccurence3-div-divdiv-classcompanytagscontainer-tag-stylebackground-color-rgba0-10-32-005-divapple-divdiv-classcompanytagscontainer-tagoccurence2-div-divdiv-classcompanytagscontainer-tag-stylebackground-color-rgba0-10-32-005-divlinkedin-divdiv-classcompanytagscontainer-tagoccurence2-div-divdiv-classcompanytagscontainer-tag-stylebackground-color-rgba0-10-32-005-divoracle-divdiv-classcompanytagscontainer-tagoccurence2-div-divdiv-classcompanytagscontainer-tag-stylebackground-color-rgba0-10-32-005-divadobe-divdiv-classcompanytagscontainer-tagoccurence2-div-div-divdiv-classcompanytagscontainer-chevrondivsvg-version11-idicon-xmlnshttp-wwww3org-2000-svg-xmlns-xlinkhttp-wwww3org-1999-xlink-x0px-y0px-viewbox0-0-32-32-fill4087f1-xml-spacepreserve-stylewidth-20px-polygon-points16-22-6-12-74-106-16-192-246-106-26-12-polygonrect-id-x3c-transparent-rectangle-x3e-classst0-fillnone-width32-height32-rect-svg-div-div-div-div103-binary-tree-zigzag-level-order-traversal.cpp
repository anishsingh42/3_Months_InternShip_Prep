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
        //similar to level order traversal 
        // the only catch is to create a flg which when 0 does left to right (normal) traversal and when 1 does the right to left (reversal) traversal
        
        bool right_to_left_flg = false;
        vector<vector<int>> res;
        if(root == nullptr) return res;
        queue<TreeNode *> qt;
        qt.push(root);
        
        while(!qt.empty()){
            int lvl_size = qt.size();
            vector<int> lvl(lvl_size);
            for(int i = 0; i < lvl_size; i++){
                TreeNode * currNode = qt.front();
                qt.pop();
                if(currNode->left) qt.push(currNode->left);
                if(currNode->right) qt.push(currNode->right);
                int index = (right_to_left_flg) ? lvl_size-i-1 : i;
                lvl[index] = currNode->val;
            }
            right_to_left_flg = !right_to_left_flg;
            res.push_back(lvl);
        }
        
        return res;
        
    }
};