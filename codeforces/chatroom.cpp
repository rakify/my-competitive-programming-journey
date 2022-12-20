#include <bits/stdc++.h>
using namespace std;
int i;
int main()
{
    string s;
    cin>>s;

    int count=0;
    for(; i<s.size(); i++)
    {
        if(s[i]=='h')
        {
            i++;
            count++;
            break;
        }
    }
    for(; i<s.size(); i++)
    {
        if(s[i]=='e')
        {
            i++;
            count++;
            break;
        }
    }
    for(; i<s.size(); i++)
    {
        if(s[i]=='l')
        {
            i++;
            count++;
            break;
        }
    }
    for(; i<s.size(); i++)
    {
        if(s[i]=='l')
        {
            i++;
            count++;
            break;
        }
    }
    for(; i<s.size(); i++)
    {
        if(s[i]=='o')
        {
            i++;
            count++;
            break;
        }
    }

    (count==5)?cout<<"YES":cout<<"NO"<<endl;

}
