#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()

int main()
{
    int t,maxi,mini,i,j;
    int n=3;
    int arr[n];
    cin>>t;
    for(j = 1; j<=t; j++)
    {
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        cout<<"Case "<<j<<": "<<arr[1]<<endl;
    }
}
