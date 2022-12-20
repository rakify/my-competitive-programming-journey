#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,temp;
    cin>>n;
    int a[n+1];
    int b[n+1];
    int c[n+1];
    int d[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
   for(i=1;i<=n;i++)
   {
       for(j=1,k=1;j<=n;j++,k++)
       {
           if(a[i]!=j)
                b[k]=j;
       }
   }

   for(i=1;i<=n;i++)
    printf("%d ",b[i]);






}
