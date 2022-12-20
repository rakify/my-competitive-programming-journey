#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int smallest(int x, int y, int z)
{
    int smallest = min(x,y);
    return min(smallest,z);
}
int main()
{
    int a,b,c,d,e,f,fset=0,sset=0,final=0,small=0,small2=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;

    int b2=b;
    int c2=c;
    int d2=d;
    int d3=0;
    //for first type
    if(a<d)
    {
        fset=a*e;
        d3=d-a;
    }
    else
    {
        fset=d*e;
    }





    small = smallest(b2,c2,d2);

    sset= small*f;


    if(fset<sset)
    {
        int final1=0;
        if(d!=small)
        {
            d=d-small;
           final1=sset+(d*e);
        }
           int final2=sset;
            if(final1>final2)
                final=final1;
            else
                final=final2;
    }
    else if(sset<fset)
    {
        if(d3!=0 &&d3<small)
        {
            int need=small-d3;
            a=a-need;
            fset=a*e;
            sset=small*f;
            final=fset+sset;
        }
        else if(d3>=small)
        {
            sset=small*f;
            final=fset+sset;
        }
        else
            final=fset;

    }
    printf("%d",final);






}
