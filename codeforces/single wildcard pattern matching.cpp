#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int i,j;
int main()
{
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;

    if(n>m+1){cout<<"NO"<<endl;return 0;}
    if(s==t){cout<<"YES"<<endl;return 0;}

    string begin,end;
    for(i=0;s[i]!='*';i++)
        begin.push_back(s[i]);
    i++;
    for(;i<s.size();i++)
    {
        end.push_back(s[i]);
    }


    for(i=0;i<begin.size();i++)
    if(t[i]!=begin[i]){cout<<"NO";return 0;}
    reverse(t.begin(),t.end());
    reverse(end.begin(),end.end());
    for(i=0;i<end.size();i++)
    if(t[i]!=end[i]){cout<<"NO";return 0;}
    cout<<"YES"<<endl;

}
