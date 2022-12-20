#include <stdio.h>
int main()
{
    FILE *x;

    x = fopen("c:\\Users\A.S\Desktop\out.txt","w");
    if(x==0)
    {
        printf("error");
        return 0;
    }
    fprintf(x,"hello");
    fclose(x);
    return 0;


}
