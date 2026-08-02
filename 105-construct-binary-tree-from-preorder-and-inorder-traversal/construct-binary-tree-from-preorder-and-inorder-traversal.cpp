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
    int search(vector<int>& inorder,int val, int left , int right){
        for(int i =left;i<=right;i++){
            if(inorder[i]==val)
                return i;
        }
        return -1;
    }
    TreeNode* tree(vector<int>& preorder, vector<int>& inorder,int& preInd, int left , int right){
        if(left>right) return NULL;
        TreeNode* root = new TreeNode(preorder[preInd]);
        int a = search(inorder,preorder[preInd],left,right);
        preInd++;
        root->left = tree(preorder,inorder,preInd,left,a-1) ;
        root->right = tree(preorder,inorder,preInd,a+1,right) ;
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre = 0;
        return tree(preorder,inorder,pre,0,inorder.size()-1);
        
    }
};