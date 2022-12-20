#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    getchar();
    char a[n+1];

    gets(a);

    for(i=0;i<=n;i++)
    {
        a[i]=a[i+1];
        printf("%s",a);
    }




}
