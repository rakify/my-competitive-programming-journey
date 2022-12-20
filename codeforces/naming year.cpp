#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int m,n,i,j,k;
    scanf("%d %d",&n,&m);
    char ns[n+1][11],ms[m+1][11];
    for(i=1; i<=n; i++)
    {
        scanf("%s",ns[i]);
    }
    for(i=1; i<=m; i++)
    {
        scanf("%s",ms[i]);
    }
    int q;
    scanf("%d",&q);
    ll y;


    for(k=1; k<=q; k++)
    {
        int forn=1,form=1;

        cin>>y;
        if(n>1)
        {
            forn= y % 10;
            if(forn==0)
                forn=n;
        }

        if(m>1)
        {

            form= y % 12;
            if(form==0)
                form=m;
        }




        printf("%s%s\n",ns[forn],ms[form]);
    }

}


