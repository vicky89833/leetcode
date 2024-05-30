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
    
   
    
    void flatten(TreeNode* root) {
        
        TreeNode* temp = root ;
        
        while( temp ){
           // left subtree is null 
            
           TreeNode* ln = temp -> left ;
           TreeNode* rn = temp -> right ;
           if(!ln && !rn )return;
           else if(!ln){
               temp -> left = NULL ;
           } 
           else{
               temp-> left = NULL ;
               temp-> right = ln ;

               //  add right node  to the right most node of left node

               while(ln->right){
                   ln = ln->right ;
               } 
               
               ln->right = rn ;
           }

               temp = temp->right ; 
        }
        
    }
};