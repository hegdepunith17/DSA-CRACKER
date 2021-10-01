int minSwap(int *arr, int n, int k) {
   int good=0,bad=0,ans=0;
   for(int i=0;i<n;i++){
       if (arr[i]<=k) good++;
       
   }
    for(int i=0;i<good;i++){
       if (arr[i]>k) bad++;
       
   }
   int i=0,j=good;
ans=bad;
   while(j<n){
       if (arr[i]>k)bad--;
       if(arr[j]>k)bad++;
       ans=min(bad,ans);
       i++;j++;
   }
   return ans;
}
