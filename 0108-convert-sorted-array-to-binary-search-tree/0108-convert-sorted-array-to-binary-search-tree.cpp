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
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return nullptr;
        if(nums.size()==1) return new TreeNode(nums[0]);
        
        int mid = nums.size()/2;
        
        TreeNode * node = new TreeNode(nums[mid]);
        vector<int> leftBST(nums.begin(), nums.begin()+mid);
        vector<int> rightBST(nums.begin()+mid+1, nums.end());
        node->left = sortedArrayToBST(leftBST);
        node->right = sortedArrayToBST(rightBST);
        return node;
    }
};