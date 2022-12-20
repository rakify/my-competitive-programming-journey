#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int i,j;
int main()
{
    int n,m;
    cin>>n>>m;
    set<int>s;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        for(i=x;i<=y;i++)
            s.insert(i);
    }
    vector<int>v;
    for(i=1;i<=m;i++)
    {
        if(s.find(i)==s.end())v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(i:v)cout<<i<<" ";


}
//4 10
//1 5 2 1 1 1 2 5 7 2
