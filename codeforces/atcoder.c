#include "bits/stdc++.h"
using namespace std;

int main()
{
    int i,n,value;
    char c;
    char b[27];


    cin>>n;
    cin>>b;
    for(i=0; b[i]!='\0'; i++)
    {
        if(n==0)
            printf("%c",b[i]);
        else if(b[i]+n>90)
        {
            printf("%c",64+(b[i]+n-90));
        }
        else
            printf("%c",b[i]+n);





    }



}
