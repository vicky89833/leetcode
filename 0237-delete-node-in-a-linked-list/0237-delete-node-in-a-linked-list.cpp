/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        
        
        //take the node ahead of the deleted node;
        ListNode* Nextnode=node->next;
        
        //take the value of the next node and transfer it to the delated node memory
        int value=Nextnode->val;
        
        //put the value to node memory
        node->val=value;
        
        //link the deleted memory become nextnode but next part of nextnode should be join with the deleted node memory.
        node->next=Nextnode->next;
        
        //now free the Nextnode
        Nextnode->next=nullptr;
        
        
        
    }
};