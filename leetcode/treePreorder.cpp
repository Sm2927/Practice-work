//https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/928/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void just(TreeNode* root, vector<int> &t){
        if(root!=NULL){
            t.push_back(root->val);
            if(root->left != NULL){
                just(root->left,t);
            }
            if(root->right != NULL){
                just(root->right,t);
            }
        }
       
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> t;
        just(root,t);
        return t;
        
    }
};
