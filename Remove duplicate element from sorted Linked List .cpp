void removeDuplicates(struct Node* head)
{
      struct Node* current = head;
 while(current->next != NULL){
     if(current->data == current->next->data){
         current->next = current->next->next;
     }else{
         current = current->next;
     }
 }
    
}
