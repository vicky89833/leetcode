/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){
            return NULL;
        }
        Node* clone=NULL;
        unordered_map<Node*,Node*> mymap;
        Node *temp=head;
        while(temp){
            mymap[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        Node * temp2=NULL;
        while(temp){
            if(!clone){
                clone=mymap[temp];
                clone->next=mymap[temp->next];
                clone->random=mymap[temp->random];
                temp2=clone;
            }
            else{
                temp2=mymap[temp];
                temp2->next=mymap[temp->next];
                temp2->random=mymap[temp->random];
                
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        return clone;
    }
};