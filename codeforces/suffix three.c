#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    scanf("%d",i);

    while(i--)
    {




    char a[1001];
    scanf("%s",a);

        if(a[strlen(a)-1]=='o' && a[strlen(a)-2]=='p')
            printf("FILIPINO\n");

             if(a[strlen(a)-1]=='u' && a[strlen(a)-2]=='s' && a[strlen(a)-3]=='e' && a[strlen(a)-4]=='d' )
            printf("JAPANESE\n");
             if(a[strlen(a)-1]=='u' && a[strlen(a)-2]=='s' && a[strlen(a)-3]=='a' && a[strlen(a)-4]=='m')
            printf("JAPANESE\n");
             if(a[strlen(a)-1]=='a' && a[strlen(a)-2]=='d' && a[strlen(a)-3]=='i' && a[strlen(a)-4]=='n'&& a[strlen(a)-5]=='m')
            printf("KOREAN\n");
    }

}
