class Solution
{
    public:
    void removeLoop(Node* head)
    {
        struct Node *slow=head,*fast=head;
        while(slow!=NULL and fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast) break;
            
        }
        if (slow==head)
        {
            while(fast->next!=slow)
            {
                fast=fast->next;
                
            }
            fast->next=NULL;
        }
        else if (slow==fast)
        {    slow=head;
            while(slow->next!=fast->next)
            {
                slow=slow->next;
                fast=fast->next;
            }
            fast->next=NULL;
        }

    
};
