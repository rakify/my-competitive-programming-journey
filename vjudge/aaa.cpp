#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,b,d;
        cin>>r>>b>>d;
        if(d==0)
        {
            if(r==b)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(r==b)
        {
            cout<<"YES"<<endl;
        }
        else if(r>b)
        {
            ll x= r/b;
            if(x-1<=d)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(b>r)
        {
            ll x=b/r;
            if(x-1<=d)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}
