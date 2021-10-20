long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  struct Node *ptr1=l1,*ptr2=l2;
  long long int num1=0,num2=0,mod=1000000007;
  while(ptr1!=NULL)
  {
      num1=((num1*10)+ptr1->data)%mod;
      ptr1=ptr1->next;
  }
  
  while(ptr2!=NULL)
  {
      num2=((num2*10)+ptr2->data)%mod;
      ptr2=ptr2->next;
  }
  
  return (num1*num2)%mod;
  
}
