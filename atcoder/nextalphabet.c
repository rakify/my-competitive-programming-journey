#include <stdio.h>
int main()
{
    int n,k,m,i,sum=0;
    scanf("%d %d %d",&n,&k,&m);
     int a[n];
    for(i=1;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int total = (n*m)-sum;
    if((sum/n)>m)
        printf("0\n");
   else if(total<k && total>=0)
        printf("%d\n",total);
    else
        printf("-1\n");

}
