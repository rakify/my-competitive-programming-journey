#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll n,m;
  cin>>n>>m;
  if ((n==1 && m!=0) || (m==1 && n!=0))
    cout<<0<<endl;
  else if((n&1) && (m&1) || ((!(n&1)) && (m&1)) || ((n&1) && (!(m&1))))
    cout<<1<<endl;
  else
    cout<<2<<endl;


}
