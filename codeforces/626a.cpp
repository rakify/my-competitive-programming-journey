#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    if(a==0 || b==0)
        cout<<0;
    else if((a+b)==n)
        cout<<a;
    else if((a+b)>n && a<=n)
        cout<<a;
    else if((a+b)>n && a>n)
        cout<<a-n;

    else if((a+b)<n)
    {
        if((n-(a+b))>=a)
        cout<<a+a;
        else
            cout<<a+(n-(a+b));
    }
}
