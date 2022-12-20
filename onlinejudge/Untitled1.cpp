#include<bits/stdc++.h>
using namespace std;
#define br printf("\n")
int main()
{
    map<string,int>m;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    if(m.size()==1){cout<<m.begin()->first<<endl;return 0;}
    if(m.begin()->second > m.rbegin()->second)cout<<m.begin()->first<<endl;
    else cout<<m.rbegin()->first<<endl;


}
