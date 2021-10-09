class Solution 
{
    public:
    int ans;
    bool isVal(int A[],int N,int M,int mid)
   {
       int page=A[0];
       int stu=1;
       for(int i=1;i<N;i++)
       {
           page+=A[i];
           if(page>mid)//next student assign
           {
               page=A[i];
               stu++;
           }
           if(stu>M)
           return false;
           
       }
        return true;
   }
   int findPages(int A[], int N, int M) 
   {
      //no of students is greater than no of books
      if(N<M)
      return -1;
       
       int lo=A[0];
       int hi=A[0];
       
       for(int i=1;i<N;i++)
       {
           hi+=A[i];
           lo=max(lo,A[i]);
       }
       
       while(lo<=hi)
       {
           int mid=(hi+lo)>>1;
           
           if(isVal(A,N,M,mid))
           {
               hi=mid-1;
               ans=mid;
           }   
           else
           lo=mid+1;
       }
       
     
       return ans;
   }
};
