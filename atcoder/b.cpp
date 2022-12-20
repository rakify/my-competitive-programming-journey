#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x,i,j,sum=0;
    cin>>x;

    for(i=100; i<=104; i++)
    {
        for(j=i+1; j<=105; j++)
        {
            if(i+j==x)
            {

                printf("1\n");
                exit(0);
            }

        }

    }



for(i=100;i<=105;i++)
{
    sum+=i;
    if(sum==x)
        {

                printf("1\n");
                exit(0);
            }
}
for(i=101;i<=105;i++)
{
    sum+=i;
    if(sum==x)
        {

                printf("1\n");
                exit(0);
            }
}
for(i=102;i<=105;i++)
{
    sum+=i;
    if(sum==x)
        {

                printf("1\n");
                exit(0);
            }
}
for(i=103;i<=105;i++)
{
    sum+=i;
    if(sum==x)
        {

                printf("1\n");
                exit(0);
            }
}
printf("0\n");


}





