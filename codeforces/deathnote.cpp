#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll rand=0,a;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
    	cin>>a;
    	rand+=a;
    	v.push_back(rand/m);
    	rand%=m;
//    	cout<<rand<<" ";
    }
    for(auto i:v)cout<<i<<" ";
}

//3 5
//3 7 9
