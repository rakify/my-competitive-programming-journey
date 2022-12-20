#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,p1,c=1,i;
    cin>>n;
    cin>>p1;
    for(i=2;i<=n;i++)
    {
        cin>>p;
        if(p1>p)
            {c++;
            p1=p;}
    }
    cout<<c;
}
