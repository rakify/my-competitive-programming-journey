#include"bits/stdc++.h"
using namespace std;

int main()
{
    int tc,i,over,ball;
    scanf("%d",&tc);
    char a[100];
    while(tc--)
    {
        ball=0;
        over=0;
        cin>>a;
        for(i=0; a[i]!='\0'; i++)
        {

            if(a[i]=='O' || a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6')
            {
                ball++;
            }
        }
        if(ball>=6)
        {
            over=ball/6;
            ball=ball-(over*6);
        }


        if(over==1 && ball>1)
            printf("%d OVER %d BALLS\n",over,ball);
        if(over==1 && ball==1)
            printf("%d OVER %d BALL\n",over,ball);
        if(over>1 && ball>1)
            printf("%d OVERS %d BALLS\n",over,ball);
        if(over>1 && ball==1)
            printf("%d OVERS %d BALL\n",over,ball);
        if(over==0 && ball==1)
            printf("%d BALL\n",ball);
        if(over==0 && ball>1)
            printf("%d BALLS\n",ball);
        if(over==1 && ball==0)
            printf("%d OVER\n",over);



    }

}
