class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long int  ans=INT_MAX;
    for(long long int  i=0;i<=n-m;i++){
        long long int minw=a[i];
        long long int maxw=a[i+m-1];
        long long int gap=maxw-minw;
        if (gap<ans ) ans=gap;
    }
    return ans;
    }   
};
