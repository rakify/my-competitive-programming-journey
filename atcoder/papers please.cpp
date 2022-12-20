
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ap=0;
    cin>>n;
    int a[n],b,i=0;
    while(n--)
    {
        cin>>b;
        if((b&1)==0)
            a[i++]=b;

    }
    for(int j=0;j<i;j++)
    {
        if(((a[j]%3)==0) || ((a[j]%5)==0))
           {
            ap++;
            }
        else
            {ap=0;}
    }
    if(ap==i)
        cout<<"APPROVED";
    else
        cout<<"DENIED";


}
