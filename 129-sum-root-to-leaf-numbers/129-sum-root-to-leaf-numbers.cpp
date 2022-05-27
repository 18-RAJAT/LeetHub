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
    int sumNumbers(TreeNode* root) {
            return dfs(root,0);
    }
        int dfs(TreeNode* root,int current)
        {
                if(!root){return 0;}
                current=current*10+root->val;
                if(!root->left and !root->right){return current;}
                return dfs(root->left,current)+dfs(root->right,current);
        }
};