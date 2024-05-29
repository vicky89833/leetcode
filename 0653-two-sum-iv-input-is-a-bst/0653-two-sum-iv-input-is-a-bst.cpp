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
    
    void inorder(TreeNode* root ,vector<int> &temp ){
        if(!root){
            return ;
        }
        inorder( root->left ,temp ) ;
        temp.push_back(root->val) ;
        inorder( root->right ,temp ) ;
        
    }
    
    bool find(TreeNode* root , int k ){
        if(!root){
            return false ;
        }
        if( root -> val  == k ){
            return true ;
        }
        bool ans = false ;
        if( root-> val > k ) {
            ans |= find( root->left , k ) ;
        }
        
       
        if( root -> val < k) {
            ans |= find( root->right , k ) ;
        }
        
        return ans ;
    }
    bool findTarget(TreeNode* root, int k ) {
        // inorder traversal  and store it in a vector
        // use two sum problem with bst fashion .
        vector<int> temp ;
        inorder( root , temp ) ;
        
        if(temp.size() == 1 ){
            return false ;
        }
        
        
        bool ans = false ;
        int n = temp.size() ;
        for( int i = 0 ; i < n ; i++ ){
            
            if(  2*temp [i] != k ){
                int j = k - temp [i] ;
                ans |= find(root , j ) ;
            }
            if(ans)return ans ;
            
            
        } // -3 -1 0 2 4
        
       return ans ;
    }
};