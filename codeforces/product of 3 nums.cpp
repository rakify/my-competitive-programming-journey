#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t;while(t--){
    ll n;cin>>n;
    ll val = n;
    vector<ll>v;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(v.size()==2)break;
        if(n%i == 0){
                v.push_back(i);n=n/i;
        }
    }

    if(v.size()<2)cout<<"NO"<<endl;
    else if(val/(v[0]*v[1]) != v[0] && val/(v[0]*v[1]) != v[1] && val/(v[0]*v[1]) != 1)
    {
        cout<<"YES"<<endl;for(auto i:v)cout<<i<<" ";cout<<val/(v[0]*v[1])<<endl;
    }
    else cout<<"NO"<<endl;
    }
}
