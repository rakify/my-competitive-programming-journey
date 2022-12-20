#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,total;
        cin>>h>>m;
        total=(h*60)+m;
        cout<<(1440-total)<<endl;
    }
}
