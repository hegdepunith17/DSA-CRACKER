        //Naive Approach
//         int len=0;
//         ListNode *temp=head;
//         while(temp!=NULL)
//         {
//             temp=temp->next;
//             len++;
//         }
//         int half=len/2;
//         temp=head;
//         while(half--)
//         {
//             temp=temp->next;
            
//         }
//         return temp;

    
        ListNode *slow=head,*fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
