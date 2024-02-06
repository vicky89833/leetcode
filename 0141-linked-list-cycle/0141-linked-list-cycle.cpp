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
    
    bool hasCycle(ListNode *head) {
        if(!head||!head->next)return false;
        ListNode *rabbit=head;
        ListNode *tortoise=head;
        while(rabbit->next&&rabbit->next->next){
            rabbit=rabbit->next->next;
            tortoise=tortoise->next;
            if(rabbit==tortoise)return true;
        }
        return false;
        
    }
};