#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,odd,even,n,pos=0;
    cin>>n;
    ll a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if((a[i]%2)==0)
            even=i;
        if((a[i]%2)!=0)
            odd=i;
    }
    for(i=1;i<4;i++)
    {
        if((a[i]%2)==0)
        {
            pos++;
        }

    }
    if(pos>=2)
    {
        cout<<odd;
    }
    else
        cout<<even;

}

