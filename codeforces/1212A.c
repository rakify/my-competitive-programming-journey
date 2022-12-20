#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    while(b--)
    {
        if ((a%10)==0)
            a=a/10;
        else
            a--;
    }
    printf("%d\n",a);



}
