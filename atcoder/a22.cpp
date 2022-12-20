#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,n;cin>>a>>b>>n;
    ll mx=0;
    for(ll i=1;i<=n;i++)
    {
        ll mx1 = floor((a*i)/b)-a*floor(i/b);
        mx= max(mx1,mx);

    }

cout<<mx<<endl;

}

