#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n,m;cin>>n>>m;
    vector<ll>v(1000000);
    for(ll i=0;i<n;i++)
    {
        scanf("%llu",&v[i]);
    }
    while(m--)
    {
        ll y;
        //cin>>y;
        scanf("%llu",&y);
        y--;
        unordered_set<ll>s{};
        vector<ll>::iterator it = v.begin()+y;
        copy(it,v.end(),inserter(s,s.begin()));
        cout<<s.size()-1<<endl;
    }


}
