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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxiDia = 0;
        height(root, maxiDia);
        return maxiDia;
    }
    int height(TreeNode *node, int& maxiDia){
        if(!node) return 0;
        int lh = height(node->left, maxiDia);
        int rh = height(node->right, maxiDia);
        maxiDia = max(maxiDia, lh+rh);
        return 1 + max(lh, rh);
    }
};