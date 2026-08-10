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
    int orde = 0;
    int helper(TreeNode* root,int k){
        if(root==NULL) return -1;
        if(root->left){
            int l = helper(root->left,k);
            if(l!=-1){
                return l;
            }
    }
        if(orde + 1 == k){
            return root->val;
        }
        orde++;
        if(root->right){
            int r = helper(root->right,k);
            if(r!=-1)
                return r;
        }
        return -1;
        
    }
    int kthSmallest(TreeNode* root, int k) {
        return helper(root,k);

    }
};