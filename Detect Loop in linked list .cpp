class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        struct Node *slow=head,*fast=head;
        while(slow!=NULL and fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast) return true;
        }
        return false;
    }
};
