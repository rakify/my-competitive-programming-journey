#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    ll n,k;
    cin>>n>>k;
    ll a,b;
    a=n-((n/k)*k);
    if(a==0)
    {
        cout<<n<<endl;
    }
    else{
    b=a-(k/2);

    cout<<(n-b)<<endl;
    }
    }
}
