#include <stdio.h>
#include <string.h>

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
    int y[q+1];
    for(k=1; k<=q; k++)
    {
        int forn=0,form=0;

        scanf("%d",&y[k]);
       forn= y[k] % 10;
       if(forn==0)
        forn=10;

       form= y[k] % 12;
       if(form==0)
        form=12;




       printf("%s%s\n",ns[forn],ms[form]);
    }
//

}

