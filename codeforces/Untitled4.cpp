#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
    ll mini=0,mini1=0;
    if(e<f)
    {
        mini = min(b,min(c,d));
        b-=mini;c-=mini;d-=mini;
        if(d>0)
            mini1 = min(d,a);
        cout<<mini*f + mini1*e<<endl;
    }
    else
    {
        mini = min(a,d);
        a-=mini;d-=mini;
        if(d>0)
            mini1=min(b,min(c,d));
        cout<<mini*e + mini*f<<endl;
    }


}
