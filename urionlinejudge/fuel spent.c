#include <stdio.h>
int main()
{
    int time,speed;
    scanf("%d %d",&time,&speed);

    float fuel = (time*speed)/12.0;

    printf("%.3f\n",fuel);
    return 0;
}
