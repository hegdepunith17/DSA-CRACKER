#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int rowstart = 0, columnstart = 0, rowend = n - 1, colend = m - 1;
    while (rowstart <= rowend && columnstart <= colend)
    {
        for (int i = columnstart; i <= colend; i++)
        {
            cout << a[rowstart][i]<<" ";
        }
        rowstart++;
        for (int i = rowstart;  i<= rowend; i++)
        {
            cout << a[i][colend]<<" ";
        }
        colend--;
        for (int i = colend; i >= columnstart; i--)
        {
            cout << a[rowend][i]<<" ";
        }
        rowend--;
        for (int i = rowend; i >= rowstart; i--)
        {
            cout << a[i][columnstart]<<" ";
        }
        columnstart++;
    }

    return 0;
}