#include <stdio.h>
int main()
{

    int num1=0,num2=0,num3=0;
    int total=0;
    int h=0,l=0,m=0;
    int c;
    scanf("%d",&c);
    while(c--)
    {


        scanf("%d%d%d",&num1,&num2,&num3);


        if(num1<num2 && num1<num3)
        {
            //check whether num1 is smallest than num2 and num3
            l=num1;
        }//if it is truen this statement is displayed
        else if(num2<num3)
        {
            //when it is false then check num2 or num 3 to small
            l=num2;//when it is true this statements is displayed
        }
        else
        {
            l=num3;
        }//all statements are false this statement is displayed
//check largest

        if(num1>num2 && num1>num3) //check largest
        {
            //check whether num1 is largest than num2 and num3
            h=num1;
        }//if it is true this statement is displayed
        else if(num2>num3)
        {
            //when it is false then check num2 or num 3 to large
            h=num2;//when it is true this statements is displayed
        }
        else
        {
            h=num3;
        }


        m= (num1+num2+num3)-h-l;



        if(m!=h && m!=l)
        {
            total+=l;
            h=h-l;
            if(h>m)
                total+=m;
            else if(m>h)
                total+=h;
            else
                total+=m;
        }
         else if(m==1 || h==1 || l==1)
        {
            total+=l;
            h=h-l;
            if(h>m)
                total+=m;
            else if(m>h)
                total+=h;
            else
                total+=m;
        }
        else if ( m!=1 && l!=1 && h!=1 && m==h)
        {
            int temp = l/2;
            h+=temp;
            m+=temp;

            if(h>m)
                total+=m;
            else if(m>h)
                total+=h;
            else
                total+=m;
        }
        else if ( m!=1 && l!=1 && h!=1 && m==l)
        {
            int temp = l/2;
            h+=temp;
            m+=temp;

            if(h>m)
                total+=m;
            else if(m>h)
                total+=h;
            else
                total+=m;
        }

        printf("%d\n",total);
        total=0;

    }



}
