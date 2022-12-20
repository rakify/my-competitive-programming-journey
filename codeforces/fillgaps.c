#include <stdio.h>
int main()
{
    int n,i,j=0,k=0;
    scanf("%d",&n);
    int a[n+1],b[n+1],c[n+1];
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);

    for(i=1,j=1; i<=n; i++,j++)
    {
        if(a[i]==0)
            j--;
        else if(a[i]==1)
            b[j]=1;
        else if(a[i]>1)
            b[j]=a[i]-1;
    }
    int len=j-1;
    for(i=1; i<=len; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(b[i]!=a[j])
            {
                b[i]=b[i+1];
            }

        }
    }
    int flen=i-2;
    for(i=1; i<=flen; i++)
        printf("\n%d ",b[i]);

}
