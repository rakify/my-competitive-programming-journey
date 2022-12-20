#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int same(int x)
{
    int digit = x%10;
    while(x>0)
    {
        if(x%10 != digit)
            return 0;
        x = x/10;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll a;
    int c=0;
    cin>>a;

    while(same(a)!=1)
    {
        a--;
        same(a);
    }

    int last=a%10;
    while(a!=0)
    {
        /* Increment digit count */
        c++;

        /* Remove last digit of 'num' */
        a/=10;
    }

    int total = (c*9)-(9-last);
    cout<<total<<endl;
    }






}

