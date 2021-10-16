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
    void reversebyme(ListNode*s,ListNode *e)
    {
        ListNode *p=NULL,*c=s,*n=s->next;
        while(p!=e)
        {
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)n=n->next;
            
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL ||k==1||head->next==NULL)return head;//base case
        ListNode *s=head,*e=head;
        int inc=k-1;
        while(inc--){
            e=e->next;
            if (e==NULL)return head;//linkedlist is small and group is large 
            
            
        }
       ListNode *newHead= reverseKGroup(e->next,k);
        reversebyme(s,e);
        s->next=newHead;
        return e;
        
        
        
    }
};
