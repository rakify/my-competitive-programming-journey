#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tc,rand,i,j;
    cin>>tc;
    for(j=1;j<=tc;j++)
    {
        int n;
        cin>>n;
        int sum=0;
        for(i=0;i<n;i++)
        {
            cin>>rand;
            if(rand>0)
            {
            sum=sum+rand;
        }
            else
                continue;
        }
        printf("Case %d: %d\n",j,sum);
    }

}
