#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Sort(v)         sort(v.begin(),v.end())
#define reSort(v)       sort(v.rbegin(),v.rend())
#define ArrSort(a,n)    sort(a,a+n)
#define Arrrev(a,n)     reverse(a,a+n)
#define pb(v)           push_back(v)
#define For(strt,n)     for(ll i=strt; i<n; i++)

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){

    ll n;
    cin>>n;
    ll arr[n];
    For(0,n)cin>>arr[i];
    sort(arr,arr+n);
    ll ans=arr[0]*arr[n-1];
    cout<< "Case "<<i<< ": "<<ans<<endl;


    }
}
