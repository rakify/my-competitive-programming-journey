#include <stdio.h>
int main()
{
    int tc=0,n,l,i,a=0;
    scanf("%d",&tc);


    while(tc--)
    {
        scanf("%d %d",&l,&n);


        while(a!=l)
        {
        for(i=0; i<n; i++)
        {
            printf("%c",'a'+i);
            a++;
            if(a==l)
                break;
        }
        i=0;
        }
        a=0;

        getchar();
        printf("\n");

    }







}
