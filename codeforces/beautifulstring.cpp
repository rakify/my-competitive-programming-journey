#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t,i,j,k,length;

    cin>>a;


    for(i=0; a[i]!='\0'; i++);
    length=i;

    for(i=0; i<=length; i++)
    {
            if(  (a[i]=='?') && (a[i+1]!='a') )

                a[i]='a';

            else
                a[i]='b';

    }
    cout<<a;


}

