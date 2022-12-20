#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int h,a;
    cin>>h>>a;
    if((h%a)!=0)
    printf("%d",(h/a)+1);
    else
        printf("%d",(h/a));
}

