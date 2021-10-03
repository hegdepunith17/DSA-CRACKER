#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
    string s = "geeksforgeeks";
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > 1)
        {
            cout << i.first<<" "<<i.second<<endl;
        }
    }
    return 0;
}
