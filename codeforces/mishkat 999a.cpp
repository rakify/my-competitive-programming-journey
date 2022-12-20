#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[101],i,j,count=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]>k)
            break;
        count++;
    }
    for(j=n-1; j>i; j--)
    {
        if(a[j]>k)
            break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}

