#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n,m,i,a;
  vector<int>v;
  cin>>n>>m;
  for(i=0;i<n;i++)
  {
      cin>>a;
     v.push_back(a);
  }
  sort(v.begin(),v.end(),greater<int>);
  int q = (1/4)m;
  for(vector<int>::iterator it=v.begin();it!=v.end();it++)
  {
      cout<<*it<<" ";
  }



}
