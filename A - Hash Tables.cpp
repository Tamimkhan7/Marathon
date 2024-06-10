#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{

    faster;
    ll n, c = 0, i;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        else
        {
            for (i = 2; i < n; i++)
            {
                if (n % i == 0)
                    c++;
            }
            int k = 0;
            if (c == 0)
            {
                n = (n * 2) + 1;
                for (i = 2; i < n; i++)
                {
                    if (n % i == 0)
                        k++;
                }
                if (k == 0)
                {
                    cout << n << endl;
                }
            }
            else
            {
                cout << (n * 2) + 1 << " (" << n << " is not prime)" << endl;
            }
        }
    }
}