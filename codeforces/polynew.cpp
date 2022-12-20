#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
    ll n,tc;
    cin>>tc;
    while(tc--)
    {
    cin >> n;
    if ( n % 2 == 0)
    {
        if(n%8==0 && n/8!=2 && n/8!=4)
            printf("YES\n2 4 %d\n",n/8);
            else
                printf("NO\n");
    }
    else
        {
            if(n%15==0 && n/15!=3 && n/15!=5)
            {
                printf("YES\n3 5 %d\n",n/15);
            }
            else
                printf("NO\n");

        }
    }
    return 0;

}
