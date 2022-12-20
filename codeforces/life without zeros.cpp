#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int i;
int main()
{
    ll a,b;
    cin>>a>>b;
    string as = to_string(a);
    string bs = to_string(b);
    string s = to_string(a+b);

    as.erase(remove(as.begin(),as.end(),'0'),as.end());
    bs.erase(remove(bs.begin(),bs.end(),'0'),bs.end());
    s.erase(remove(s.begin(),s.end(),'0'),s.end());

    ll al = stoll(as,nullptr,10);
    ll bl = stoll(bs,nullptr,10);
    string s1 = to_string(al+bl);

    if(s==s1)cout<<"YES"; else cout<<"NO";
    cout<<endl;

}

