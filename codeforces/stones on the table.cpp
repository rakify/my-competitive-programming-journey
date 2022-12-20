#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,c=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    cout<<c;
}
