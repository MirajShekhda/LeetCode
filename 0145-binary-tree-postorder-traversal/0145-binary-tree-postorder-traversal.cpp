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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> stack;
        TreeNode* temp = root;
        TreeNode* lastvisit = nullptr;

        while(temp != nullptr || !stack.empty()){
            while(temp != nullptr){
                stack.push(temp);
                temp = temp->left;
            }
            temp = stack.top();
            if(temp->right == nullptr || temp->right == lastvisit){
                ans.push_back(temp->val);
                stack.pop();
                lastvisit = temp;
                temp = nullptr;
            }else{
                temp = temp->right;
            }
           
        }
        return ans;
    }
};