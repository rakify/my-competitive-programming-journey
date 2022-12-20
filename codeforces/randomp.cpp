#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
         long long a,b,sum=0;
    scanf("%d %d",&a,&b);
    if(a%2==0)
        a++;
    for(a;a<=b;a+=2)
    {
        sum+=a;
    }
    printf("Case %d: %lld",i,sum);
    if(i!=t)
        printf("\n");

    }
}
