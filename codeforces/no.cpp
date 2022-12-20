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
    if((a+b+c+n)%3==0)
        printf("yes\n");
    else
        printf("no\n");
    }
}
