#include<bits/stdc++.h>
using namespace std;
typedef int ll;
ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

ll findGCD(ll arr[], ll n)
{
	ll result = arr[0];
	for (ll i = 1; i < n; i++)
		result = gcd(arr[i], result);

	return result;
}


int main()
{
    ll n;cin>>n;
    ll arr[n];
    n=n/2;
    ll lcd;
    ll i=0;
    for(i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[i]=(a*b)/gcd(a,b);
    }

    ll x = sizeof(arr) / sizeof(arr[0]);
    cout << findGCD(arr, x) << endl;
    for(ll i=0;i<n;i++)cout<<arr[i]<<" ";

}
