#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int i,j;
int main()
{
    int n,m,q;
    string s,t;
    cin>>n>>m>>q;
    cin>>s>>t;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        string str;
        for(i=x-1,j=0;i<y;i++,j++)
        {
            str.push_back(s[i]);
        }
        int count=0;
        while(size_t found = str.find(t)!=string::npos)count++;
        cout<<count<<endl;
    }
}
