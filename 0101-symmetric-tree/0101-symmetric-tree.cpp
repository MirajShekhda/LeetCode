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
    bool subtreeCheck(TreeNode* left,TreeNode* right){
        if(left==nullptr && right==nullptr){
            return true;
        }
        if(left==nullptr || right==nullptr){
            return false;
        }
        return (left->val == right->val) && subtreeCheck(left->left,right->right) && subtreeCheck(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }else{
            return subtreeCheck(root->left,root->right);
        }
    }
};