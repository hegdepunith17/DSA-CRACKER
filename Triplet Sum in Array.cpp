bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++)
     {
        int j=i+1;
        int k=n-1;
        int sum=X-A[i];
        while(j<k)
        {
            if (A[j]+A[k]==sum)return 1;
           if(A[j]+A[k]<sum)j++;
            else k--;
        }
     }
    return 0;
    }
