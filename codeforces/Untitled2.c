#include <stdio.h>
int main()
{
    int i,n,total=0,result,power;
    int a[1000];
    scanf("%d",&n);



    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        total+=a[i];
    }
for(i=0;i<n;i++)
{
    if(a[i]*n>total)
    {

        result = a[i];
    break;}
}
printf("%d",result);




}
