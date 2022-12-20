#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<3)
        cout<<"NO";
    else if(!((a-2)&1))
        cout<<"YES";
    else
        cout<<"NO";
}
