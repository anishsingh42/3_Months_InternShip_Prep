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
    void inorderTraversal(TreeNode*root, vector<int> &in){
        if(!root) return;
        
        inorderTraversal(root->left, in);
        in.push_back(root->val);
        inorderTraversal(root->right, in);
    }
    
    bool twoSum(vector<int> arr, int k){
        int i = 0;
        int j = arr.size()-1;
        
        while(i < j){
            if(arr[i] + arr[j] == k) return 1;
            else if(arr[i] + arr[j] > k) j--;
            else i++;
        }
        
        return 0;
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> in;
        inorderTraversal(root, in);
        return twoSum(in, k);
    }
};