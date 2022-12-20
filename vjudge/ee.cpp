#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,notsame=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
 sort(a,a+n);
    if(n==1)
        printf("-1");
    else if((n&1)==0)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==a[i+1])
            {
                notsame++;
            }
        }
        if(notsame==n-1)
            printf("-1");
        else
        {
            printf("%d\n%d",1,a[0]);

        }
    }
    else
    {
        printf("%d\n%d",1,a[0]);

    }


}
