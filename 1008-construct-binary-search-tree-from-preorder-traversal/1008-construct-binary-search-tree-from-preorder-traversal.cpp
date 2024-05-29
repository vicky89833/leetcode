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
    void insert(TreeNode* root , int k ){
        
        if( root ->val > k ){
            if(!root->left){
               root->left = new  TreeNode(k);
           }
           else{
               insert( root->left ,k );
           }
        }
           
         
        if( root ->val < k){
               if(!root->right){
               root->right = new  TreeNode(k);
           }
           else{
               insert( root->right ,k );
           }
         }
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // first value will give root 
        int n = preorder.size();
        if(n==0)return NULL ;
        
        TreeNode* root = new  TreeNode(preorder[0]);
        
        for(int i =1; i< n ; i ++ ){
            TreeNode* temp =root ;
            insert( temp , preorder[i]) ;
            
        }
        
        
       return root ;
    }
};