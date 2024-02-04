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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //take head as other pointer
        ListNode* tempH=head;
        int length=0;
        while(tempH){
            length++;
            tempH=tempH->next;
        }
       // n th node from end will be m th node from begin is length - n +1
         //   1 2 3 4 5 6 7 8 9
           
        
       int m=length -n+1; 
        if(m==1){
            return head->next;
        }
        tempH=head;
        // reach the jusp before the node
        for(int i=1;i<m-1;i++){
            tempH=tempH->next;
        }
        
        //take the nth node
        ListNode* nthNode=tempH->next;
        tempH->next=nthNode->next;
        return head;
        
        
        
    }
};