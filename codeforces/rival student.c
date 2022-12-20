#include<stdio.h>
int main()
{
    int ts,a,b,tc,s,posa,posb,i,temp;
    scanf("%d",&tc);
    scanf("%d %d %d %d",&ts,&s,&a,&b);

    for(i=0; i<=tc; i++)
    {

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }

        for(i=a; i>=1 && s!=0; i--)
        {
            s--;

        }
        posa = i;



        for(i=b ; i<=ts; i++)
        {
            while(s!=0)
                s--;



        }
        posb = i;

        printf("%d",posb-posa);
    }

}
