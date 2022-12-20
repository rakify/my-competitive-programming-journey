#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    for(ll j=1;j<=t;j++)
    {
        vector<ll>v;
        ll n,s;cin>>n>>s;while(n--){
        ll x;cin>>x;
        v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll sum=0,c=0;
        for(ll i=0;i<v.size();i++)
        {
            sum+=v[i];
            if(sum>s)break;c++;
        }
        cout<<"Case #"<<j<<": "<<c<<endl;
    }
}
