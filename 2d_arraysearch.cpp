#include <iostream>
using namespace std;
int main()
{
    int n, m, key;
     cin>>n>>m;
    int a[n][m];
    
   

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter a key" << endl;
    cin >> key;

    int i = 0;
    int j = m - 1;
    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        if (a[i][j] == key)
        {
            cout << i << " " << j;
            exit(0);
        }
        else if (a[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}