#include <iostream>
#include <string>
using namespace std;
bool areRotations(string s1 , string s2)
{
    if (s1.length() == s2.length() && (s1 + s1).find(s2))
        return 1;
    else
        0;
}
int main()
{
    string str1 = "ABACD",str2 = "CDABA";
    cout<<areRotations(str1, str2);
   
}
