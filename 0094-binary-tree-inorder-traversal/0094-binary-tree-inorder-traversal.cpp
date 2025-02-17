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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        DFS(root,ans);
        return ans;
    }
private:
    void DFS(TreeNode* r, vector<int>& ans)
    {
        if(r==NULL)
        return;
        DFS(r->left,ans);
        ans.push_back(r->val);
        DFS(r->right,ans);
    }
};