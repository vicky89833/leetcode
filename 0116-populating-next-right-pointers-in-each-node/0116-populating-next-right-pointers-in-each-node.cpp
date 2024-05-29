/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        // level order traversal needed
        
       //queue is used for it 
        
        // base cases 
        if( !root )return root ;
        
        queue< Node* > myq ;
        myq.push(root);
        
        
        
        while(!myq.empty()){
            int n =myq.size() ;
            Node* curr = nullptr ;
            Node* prev = nullptr ;
            for( int i =0 ; i< n ; i++ ){
               Node* curr = myq.front() ;
               myq.pop() ;
               if( curr-> left)myq.push(curr -> left);
               if(curr->right) myq.push( curr->right );
               
               if(prev){
                   prev->next = curr ;
               } 
               prev =curr ; 
            }
            prev->next= nullptr ;
            
        }
        
        return root ;   
    }
};