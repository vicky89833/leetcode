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
    TreeNode* f(TreeNode* root, TreeNode* p, TreeNode* q ){
        if( root ==p || root == q ){
            return root ;
        }
        int value = root->val ;
        TreeNode* temp = root ;
        if(value < q ->val && value < p ->val  ){
            temp = f(root->right,  p,  q );
        }
        if(value > q ->val && value > p ->val  ){
            temp = f(root-> left , p,  q);
        }
        return temp ;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        
        return f(root, p,  q);
    }
};