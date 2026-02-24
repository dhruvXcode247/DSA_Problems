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
    void path(TreeNode* root,vector<int>&temp,vector<vector<int>>&ans) {
        if (root==nullptr) return;
        temp.emplace_back(root->val);
        if (root->left==nullptr && root->right==nullptr) {
            ans.emplace_back(temp);
        }
        if (root->left!=nullptr) path(root->left,temp,ans);
        if (root->right!=nullptr) path(root->right,temp,ans);
        temp.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>temp;
        path(root,temp,ans);
        int sum=0;
        int n=ans.size();
        for (int i=0;i<n;i++) {
            int num=0,size=ans[i].size();
            for (int j=0;j<size;j++) {
                num=num*2+ans[i][j];
            }
            sum+=num;
        }
        return sum;
    }
};