#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0,j=1; i<s.size()-1,j<s.size(); i++,j++)
    {
        if(s[i]==s[j])
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    if(n==1){cout<<"Yes"<<endl;return 0;}
    cout<<"No"<<endl;

}
