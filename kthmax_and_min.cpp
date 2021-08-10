#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
                //Brute Force approach------------------
              //optimal using max heap and min heap 
    int n;
    cin >> n;
    int a[n];
   

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     int k;
     cin>>k;
    sort(a,a+n);
    cout<<"K th max element is : " <<a[n-k]<<"  kth min element is:"<<a[k-1]<<endl;
        return 0;
}