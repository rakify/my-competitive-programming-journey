#include <stdio.h>
int main()
{

    int num1=0,num2=0,num3=0;
    int total=0;
    int h=0,l=0,m=0;
    int c;

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




        int temp = h-m;
        if(temp<=l)
        {
            int l1=l/2;

            for(l1;l1!=l && m!=h;l1++)
            {
                m+=l1;
            }

            total+=m;

        }
        if(temp>l)
        {

               total+=m;
            h=h-total;
            if(h>l)
                total+=l;
        }

            printf("%d",total);

}
