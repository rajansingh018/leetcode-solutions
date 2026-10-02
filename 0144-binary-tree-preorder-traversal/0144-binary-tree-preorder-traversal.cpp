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
vector<int> preorder;
void preorderTrav(TreeNode* node){
    if(node==NULL) return;
    preorder.push_back(node->val);
    preorderTrav(node->left);
    preorderTrav(node->right);
}
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode* node = root;
        // if(node==NULL) return NULL;
        preorderTrav(node);
        return preorder;
    }
};