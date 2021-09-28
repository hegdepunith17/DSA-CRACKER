class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
      
      //----Naive---//
        // int ans=INT_MAX;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for (int j=i;j<n;j++)
        //     {
        //         sum+=arr[j];
        //         if (sum>x) ans=min(ans,j-i+1);
        //     }
        // }
        // return ans;
        int i=0,j=0,s=0,ans=INT_MAX;
        while(i<=j and j<n)
        {
            while(s<=x and j<n)
            {
                s+=arr[j];
                j++;
            }
              while(s>x and i<j)
              {
                ans=min(ans,j-i);
                s=s-arr[i];
                i++;
             }
        }
        return ans;
    }
};
