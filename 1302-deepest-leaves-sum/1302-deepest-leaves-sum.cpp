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
    void result (int i, int &sum, int height, TreeNode* root) {
        if (root==nullptr) return;
        TreeNode* temp=root;
        if (i==height-1) {
            sum+=temp->val;
            return;
        }
        result(i+1,sum,height,root->left);
        result(i+1,sum,height,root->right);
    }
    int depth(TreeNode* root) {
        if (root==nullptr) return 0;
        return 1+max(depth(root->left),depth(root->right));
    }
    int deepestLeavesSum(TreeNode* root) {
        if (root==nullptr) return 0;
        TreeNode* temp=root;
        int height=depth(root);
        int sum=0;
        result(0,sum,height,root);
        return sum;
    }
};