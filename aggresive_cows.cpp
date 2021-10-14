#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, c, ans;

    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int low = 0;
        int high =  a[n - 1]-a[0];
        int ans = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            int cow = 1; //that is c1 is fixed at 0 th position
            int prev = a[0];
            for (int i = 1; i < n; i++)
            {
                if (a[i] - prev >= mid)
                {
                    cow++;
                    prev = a[i];
                    if (c == cow)
                        break;
                }
            }
            if (cow == c)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}