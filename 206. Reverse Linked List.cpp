if(head==NULL) return NULL ;
        ListNode *prev=NULL ,*cur=head,*nxt=head->next;
        while(cur!=NULL)
        {
            cur->next=prev;
            prev=cur;
            cur=nxt;
           if(nxt!=NULL) nxt=nxt->next;
            
        }
        return prev;


//Recursive 
class Solution {
public:
    ListNode *reverse(ListNode *head)
    {
        
        if(head->next==NULL){
            return head;
        }
        ListNode *newnode=reverse(head->next);
            head->next->next=head;
        head->next=NULL;
        return newnode;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return NULL ;
        return reverse(head);
    }
};
