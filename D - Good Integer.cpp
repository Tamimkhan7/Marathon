#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if ((s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3]))
        {
            cout << "Yes" << endl;
            break;
        }
        else
        {
            cout << "No" << endl;
            break;
        }
    }
}