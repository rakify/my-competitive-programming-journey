#include <bits/stdc++.h>
using namespace std;
int i;
int main()
{
    string s;
    cin>>s;
    int sm=0,b=0;

    for(i=0;i<s.size();i++)
        (isupper(s[i]))?b++:sm++;

    if(sm>=b){
        for(auto &i:s)i=tolower(i);
        cout<<s;
        return 0;
    }
    else
        for(auto &i:s)i=toupper(i);
        cout<<s;



}
