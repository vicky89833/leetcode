/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
int a=0;
struct ListNode *head,*currhead,*temp;
head=NULL;
temp=NULL;
currhead=NULL;
if(list1==NULL){
        return list2;
}
if(list2==NULL){
        return list1;
}
while(list1!=NULL&&list2!=NULL)
{
        if(list1->val<=list2->val)
        {
                struct ListNode* temp=malloc(sizeof(struct ListNode));
                temp->val=list1->val;
                temp->next=NULL;
                
                list1=list1->next;
                if(a==0){
                        currhead=temp;
                        head=currhead;
                        a++;
                        
                }
                else
                {
                    currhead->next=temp;
                    currhead=temp;
                }
                
        }
        else
        {
            struct ListNode* temp=malloc(sizeof(struct ListNode));
                temp->val=list2->val;
                temp->next=NULL;
                
                list2=list2->next;
                if(a==0){
                        currhead=temp;
                        head=currhead;
                        a++;
                } 
                else
                {
                    currhead->next=temp;
                    currhead=temp;
                }
        }
}
if(list1!=NULL){
        currhead->next=list1;
}
if(list2!=NULL){
        currhead->next=list2;
}

return head;

};
// int main(){
//     struct ListNode *list1,*list2;
//     scanf("%p",&list1);
//     scanf("%p",&list2);

//  struct ListNode *head=NULL;
//  head=mergeTwoLists(list1,list2);
//  while(head!=NULL){
//      printf("%d ",head->val);
//      head=head->next;
//  }
// }