#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,i,sum=0;

    cin>>n>>k;
    ll h[n];
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }
    sort(h,h+n);
    for(i=0;i<n-k;i++)
        sum+=h[i];
    cout<<sum;


}
