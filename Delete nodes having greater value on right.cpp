class Solution
{
    public:
    
    Node* reverse(Node* head){
        Node* curr = head;
        Node* Next = head->next;
        Node* prev = NULL;
        while(curr != NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
            if(Next!=NULL)   Next = Next->next;
        }
        return prev;
    }
    
    Node *compute(Node *head){
        
       
        Node* ptr1 = head;
        
        Node *prev=NULL;
        Node* ptr2 = reverse(ptr1);
        
       
        Node* ptr3 = ptr2;
        int mx=INT_MIN;
        while(ptr2!=NULL)
        {
            if(ptr2->data>=mx){
                mx=ptr2->data;
               prev=ptr2;
               ptr2=ptr2->next;
            }
            else {
                prev->next=ptr2->next;
                ptr2=ptr2->next;
            }
        }
        
        
    
        return reverse(ptr3);
    }
    
};
