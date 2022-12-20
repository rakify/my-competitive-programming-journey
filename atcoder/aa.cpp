#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll l,r,c;
    cin>>l>>r;
    if(l<10)
    {
        c=r+(100*(10-l));
    }
    else
        c=r;
    cout<<c;
}
