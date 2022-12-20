#include <stdio.h>
#include <string.h>
int main()
{
    int tt;
    scanf("%d",&tt);
    getchar();
    while(tt--)
    {
    int t;
    int n1=0;
     int n2;
     char s2[100],s1[100];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%s %d",s2,&n2);
        getchar();
        if(n2>n1)
        {
            n1=n2;
            strcpy(s1,s2);
        }
    }
    printf("%s\n",s1);
}
}
