#include <stdio.h>
int main()
{
    int m1,d1,m2,d2;
    scanf("%d %d",&m1,&d1);
    scanf("%d %d",&m2,&d2);
    if(m1+1 == m2)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
