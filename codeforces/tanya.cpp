#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int i,j,k,l,c=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(k=0; k<n; k++)
    {
        int r1=0,r2=0;

        for(i=0;i<n;i++)
            b[i]=a[i];

        for(i=0; i<n; i++)
        {
            if(i==k)
            {
                for(j=i; j<(n-1); j++)
                {
                    b[j]=b[j+1];
                }
            }
        }



        for(i=0;i<(n-1);i++)
        {
            if(i%2==0)
            r1+=b[i];
            else
                r1-=b[i];
        }


        if(r1==0)
            c++;


    }

    printf("%d",c);


}


