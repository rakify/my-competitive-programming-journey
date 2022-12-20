#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int res=0;
    for(i=0;i<n;i++)
    {
        if(a[i]-a[i+1]==0)
        {
            res=1;
            break;
        }
    }
    if(res==0)
        cout<<"YES";
    if(res==1)
        cout<<"NO";

}
