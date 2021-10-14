#include <iostream>
using namespace std;

int main()
{

    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        else
        {
            int a[n];
            for (int i = 0; i < n; i++)
                cin >> a[i];
            int m;
            cin >> m;
            int b[m];
            for (int i = 0; i < m; i++)
                cin >> b[i];
            int ans = 0, i = 0, j = 0, s1 = 0, s2 = 0;
            while (i < n and j < m)
            {
                if (a[i] < b[j])
                {
                    s1 += a[i];
                    i++;
                }
                else if (b[j] < a[i])
                {
                    s2 += b[j];
                    j++;
                }
                else
                {
                    ans += max(s1, s2) + a[i];
                    i++;
                    j++;
                    s1 = 0, s2 = 0;
                }
            }
            while (i < n)
            {
                s1 += a[i];
                i++;
            }
            while (j < m)
            {
                s2 += b[j];
                j++;
            }
            ans += max(s1, s2);
            cout << ans << endl;
            
        }
    }
    return 0;
}