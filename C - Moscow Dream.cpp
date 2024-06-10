#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, n, k;
    cin >> a >> b >> c >> n;
    if (a > 0 && b > 0 && c > 0)
    {
        k = a + b + c;
        if (k >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}