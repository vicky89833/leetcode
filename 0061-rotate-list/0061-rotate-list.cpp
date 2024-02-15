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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0){
            return head;
        }
        
        //find length of linked list
        int n=0;
        ListNode* temp=head;
        ListNode* end=nullptr;
        ListNode* output=nullptr;
        while(temp){
            n++;
            if(!temp->next){
                end=temp;
            }
            temp=temp->next;
            
        }
        k=k%n;
        if(k==0){
            return head;
        }
        //we have to ratate k nodes from last
        //or we have to take first n-k nodes head and add them to the end of the list;
        //traverse n-k steps and breaks the link between n-k node and n-k+1 node ,also take n-k+1 pouter
        temp=head;
        for(int i=1;i<n-k;i++){
            temp=temp->next;
        }
        output=temp->next;
        temp->next=nullptr;
        end->next=head;
        
        
        return output;
        
    }
};