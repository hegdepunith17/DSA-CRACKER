#include <iostream>
#include <string>
using namespace std;
int maxSubStr(string s)
{
    int n = s.length();
    int c1 = 0, c0 = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c0++;
        }
        else
            c1++;
        if (c1 == c0)
        {
            count++;
        }
    }
    if (c0 != c1)
        return -1;
    else
        return count;
}

int main()
{
    string str = "0100110101";
    cout << maxSubStr(str);
    return 0;
}
