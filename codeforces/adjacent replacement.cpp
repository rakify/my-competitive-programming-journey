#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b,thi,that;

    vector<int>v,v1,v2;
    cin>>a>>b;

    while(a--){int x;cin>>x;v.push_back(x);}
    while(b--){int y;cin>>y;v1.push_back(y);}
    int count=0,i,j;
    for(i=0,j=0;i<v.size()&&j<v1.size();i++)
    {

        if(v1[j]>=v[i])
        {
            count++;j++;
        }
      }
     cout<<count<<endl;

}

