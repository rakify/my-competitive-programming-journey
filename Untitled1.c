#include <stdio.h>
int main()
{
    int i,j,a[3][3];
    float result[3][3];

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=0;j++)
        {
            result[i][j]=0;
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            result[i][j]=a[i][j]/5.0;
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%.2f ",result[i][j]);
        }
        printf("\n");
    }

}
