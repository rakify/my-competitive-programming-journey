#include <bits/stdc++.h>
using namespace std;
//function that determines if the number is prime or not
int ifprime(int n)
{
    int i;
    for(i=2; i<sqrt(n); i++)
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


    if(ifprime(n))
        printf("%d\n",n);

    if(!ifprime(n))
    {
        for(i=n; 1; i--)
        {
            if(ifprime(i))
            {
                lowprime=i;
                break;
            }
        }
        for(i=n; 1; i++)
        {
            if(ifprime(i))
            {
                highprime=i;
                break;
            }
        }

        if(highprime-n<n-lowprime)
            printf("%d\n",highprime);
        else
            printf("%d\n",lowprime);

    }

}
