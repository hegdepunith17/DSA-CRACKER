#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int l = 0;
    int r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (l < r)
    {
        if (a[l] < 0 && a[r]>0)
        {
            l++, r--;
        }

        else if (a[l] >0 && a[r]<0)
        {
            swap(a[l], a[r]);
            l++, r--;
        }
        else if (a[l] < 0 && a[r]<0)
        {
           
            l++;
        }
        else{
            r--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }

    return 0;
}