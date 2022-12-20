#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    string key;
    int value;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>key>>value;
        if(find(m.begin(),m.end(),key)==m.end())
            m[key]=value;
        else
            m[key]+=value;
    }
    map<int,string>m1;
    map<string,int>::iterator it;
    map<int,string>::iterator it1;
    for(it=m.begin();it!=m.end();it++)
    {
        key=(*it).first;
        value=(*it).second;
        m1[value]=key;
    }
    for(it1=m1.begin();it1!=m1.end();it++)
        cout<<(*it1).first<<" "<<(*it1).second;
}
