#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i,j;
int main()
{
    string s;
    cin>>s;
    string collect_0_2,collect_1;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='0' || s[i]=='2')
            collect_0_2.push_back(s[i]);
        if(s[i]=='1')
            collect_1.push_back(s[i]);
    }
    string final;
    for(i=0;i<collect_0_2.size();i++)
    {
        if(collect_0_2[i]=='2')
        {
            final+=collect_1;collect_1.clear();
        }
        final+=collect_0_2[i];

    }
    cout<<final<<collect_1;

//    int before = collect_0.size();
//    if(!(collect_0.empty()))
//    {
//        for(i=0; i<collect_2.size(); i++)
//            collect_0.pop_back();j++;
//            }
//    int after = before - collect_0.size();
//
//    for(i=0; i<collect_0.size(); i++)
//            cout<<collect_0[i];
//    for(i=0; i<collect_1.size(); i++)
//        cout<<collect_1[i];
//    for(i=0; i<collect_2.size(); i++)
//        if(j!=0)
//            {cout<<collect_2[i]<<0;j--;}
//            else cout<<collect_2[i];




}
