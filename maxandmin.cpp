#include <iostream>
using namespace std;
int main()
{
    int maxNo, n, minNo;
    cout<<"Enter the size of an array"<<endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   maxNo=max(arr[0],arr[1]);
   minNo=min(arr[0],arr[1]);
    for (int i = 2; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout<<maxNo<<" "<<minNo;

    return 0;
}