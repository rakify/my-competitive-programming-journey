#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int i,n,h,width=0;
   cin>>n>>h;
   for(i=0;i<n;i++)
   {
       int height;
       cin>>height;
       if(height>h)
        width+=2;
       else
        width++;
   }
   cout<<width<<endl;
}
