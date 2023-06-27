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
    int widthOfBinaryTree(TreeNode* root) {
        int res = 0;
        if (!root) return res;
        queue<pair<TreeNode*, pair<unsigned long long, unsigned long long>>> q;
        q.push({root, {1, 0}});
        unsigned long long prevNum = 1;
        unsigned long long prevLvl = 0;
        
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            unsigned long long num = it.second.first;
            unsigned long long lvl = it.second.second;
            
            if (lvl > prevLvl) {
                prevLvl = lvl;
                prevNum = num;
            }
            
            res = max(res, static_cast<int>(num - prevNum) + 1);
            
            if (node->left) {
                q.push({node->left, {2 * num, lvl + 1}});
            }
            
            if (node->right) {
                q.push({node->right, {2 * num + 1, lvl + 1}});
            }
        }
        
        return res;
    }
};
