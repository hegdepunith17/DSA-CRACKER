class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int arr[3]={0,0,0};
        
        struct Node *cur =head;
        while (cur!=NULL)
        {
            arr[cur->data]++;
            cur=cur->next;
        }
        cur=head;
        int i=0;
        while(cur!=NULL)
        {
            if (arr[i]==0)i++;
            else{
                 cur->data=i;
                 arr[cur->data]--;
                 cur=cur->next;
            }
        }
        
        return head;
     
        
    }
};
