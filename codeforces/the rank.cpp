#include<bits/stdc++.h>
using namespace std;
int i,j;
int main()
{
    int n;
    cin>>n;
    vector<int>v1;
    while(n--)
    {
        vector<int>v;
        for(i=0;i<4;i++)
        {int a;
        cin>>a;
        v.push_back(a);}

        v1.push_back(accumulate(v.begin(),v.end(),0));
    }

    int mesum=v1[0];

    sort(v1.begin(), v1.end(), greater<int>());
    vector<int>::iterator it = find(v1.begin(),v1.end(),mesum);
    cout<<it-v1.begin()+1;

}
//5
//100 98 100 100
//100 100 100 100
//100 100 99 99
//90 99 90 100
//100 98 60 99
