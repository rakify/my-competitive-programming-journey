#include <bits/stdc++.h>
using namespace std;
//function that determines if the number is prime or not
int prime(int n)
{
    int i;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
}

int main()
{
    int i,n,highprime,lowprime;
    cin>>n;


    if(prime(n)==0)
        printf("%d\n",n);

    else
    {
        if(!(n&1))
            n++;


        for(i=n; 1; i-=2)
        {
            if(prime(i)==0)
            {
                lowprime=i;
                break;
            }
        }
    }
    for(i=n; 1; i+=2)
    {
        if(prime(i)==0)
        {
            highprime=i;
            break;
        }
    }

    if(highprime-n<n-lowprime)
        printf("%d\n",highprime);
     if(highprime-n>n-lowprime)
        printf("%d\n",lowprime);



}

