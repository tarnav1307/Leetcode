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
        queue<pair<TreeNode*,unsigned long long int>> q;
        q.push({root,0});
        int maxWidth = 0;
        while(!q.empty()){
            int curr = q.size();
            unsigned long long int st = q.front().second;
            unsigned long long int en = q.back().second;
            maxWidth = max(maxWidth,(int)(en-st+1));
            for(int i =0;i<curr;i++){
                auto currNode = q.front();
                q.pop();
                if(currNode.first->left) 
                    q.push({currNode.first->left,2*currNode.second+1});
                if(currNode.first->right) 
                    q.push({currNode.first->right,2*currNode.second+2});
            }
        }
        return maxWidth;
    }
};