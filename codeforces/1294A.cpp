#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {


    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int h = max(a,max(b,c));
    int l = min(a,min(b,c));
    int m = (a+b+c)-(h+l);
    n = n - ((h-m)+(h-l));
    if(n==0)
        printf("Yes\n");
    else if(n%3==0 && n>0)
        printf("Yes\n");
    else
        printf("No\n");
    }
}
