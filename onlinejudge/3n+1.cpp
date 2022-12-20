#include <bits/stdc++.h>
using namespace std;
int main()
{
    int real_a,real_b,a,b,count=0;
start:
    cin>>real_a>>real_b;
    a=real_a;
    b=real_b;

    if(a<b)(swap(a,b));
    if(max(a,b)==1)count++;
    while(a!=b)
    {
        if(a&1)
            {a=3*a+1;
            a/=2;
        count+=2;}
        else
        {
         a/=2;
         count++;
        }
    }

    cout<<real_a<<" "<<real_b<<" "<<count<<endl;
    goto start;

}
