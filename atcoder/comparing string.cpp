#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b;
    cin>>a>>b;
    if(a==b)
       {for(i=1;i<=a;i++)
        printf("%d",a);}
    else if(a<b)
    {for(i=1;i<=b;i++)
        printf("%d",a);}
        else if (b<a)
        {
            for(i=1;i<=a;i++)
                printf("%d",b);
        }

}
