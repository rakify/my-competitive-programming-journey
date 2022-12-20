#include "bits/stdc++.h"
using namespace std;

int main()
{
    int i,n,value;
    char c;
    char b[99999];


    cin>>n;
    cin>>b;
    for(i=0; b[i]!='\0'; i++)
    {
        printf("%c",b[i]+((b[i]+n)%26));





    }



}
