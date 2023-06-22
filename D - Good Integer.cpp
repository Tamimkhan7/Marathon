#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int c = 0, k;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
            if (c == 2)
            {
                k = c;
                c = 0;
            }
            else
            {
                continue;
            }
        }
    }
    if (k == 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}