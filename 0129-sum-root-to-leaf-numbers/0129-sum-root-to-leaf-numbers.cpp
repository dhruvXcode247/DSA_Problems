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
    void summ(TreeNode* root,int &sum,int current) {
        if (root==nullptr) return;
        current=(current*10)+root->val;

        if (root->left==nullptr && root->right==nullptr) {
            sum+=current;
            return;
        }

        summ(root->left,sum,current);
        summ(root->right,sum,current);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0,current=0;
        summ(root,sum,current);
        return sum;
    }
};