#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k,n,i,j,rand,coun=0,ans=0;
    cin>>k>>n;
    vector <ll>v;
    for(i=0;i<n;i++)
    {
        cin>>rand;
        if(rand!=0)
        v.push_back(rand);
        else
            continue;
    }

    if(v.size()<=1)
        cout<<0<<endl;
    else
    {
    for(i=0,j=1;j<=v.size()-1;i++,j++)
    {
        ans+=(v[i]-v[j]);

    }
    cout<<abs(ans)<<endl;
    }
}

