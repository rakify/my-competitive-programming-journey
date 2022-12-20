#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c,n,i,res=0;
   cin>>a>>b>>c>>n;
 res=n-((a-c) + (b-c) + c);
 if(a>=n && b>=n && c>=n)
    printf("-1");
   else if(res<=0)
    printf("-1");
   else
    printf("%d",res);
}

