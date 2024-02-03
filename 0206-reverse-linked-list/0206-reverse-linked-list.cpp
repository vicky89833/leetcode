/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
         //temp head for traverse
         ListNode* tempH=head;
        //new head and temp ,temp will take node and add it to the first of new node;
         ListNode* reversehead=nullptr;
         ListNode* temp=nullptr;
        
         while(tempH){
             //take temp head value 
             temp=tempH;
             //take value and move the temp head before doing new operation
             tempH=tempH->next;
             // add temp to new head by chaging pointer next
             temp->next=reversehead;
             reversehead=temp;
             
             
         }
        return reversehead;
    }
};