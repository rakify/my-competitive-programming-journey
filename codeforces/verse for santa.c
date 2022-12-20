#include <stdio.h>
int main()
{
    int n,s,i,j;
     int howmany,pos=0;
     int tt;
     scanf("%d",&tt);
     while(tt--)
     {
    scanf("%d %d",&n,&s);
    int a[n+1],sum=0;
        for(i=1;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(sum>=s)
        {
            howmany=i;
            break;
        }



        }


        for(i=1;i<=howmany;i++)
        {
            for(j=i+1;j<=howmany;j++)
            {if(a[i]>a[j])
                pos=i;
                else if(a[j]>a[i])
                    pos=j;
            }
        }
        printf("%d\n",pos);
     }


}
/*
7 11
2 9 1 3 18 1 4
*/
