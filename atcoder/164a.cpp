#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

ll a;cin>>a;int c=0;
while((a/=2019)!=0)
{
    if(a==1)break;
    c++;
}cout<<c;
}
