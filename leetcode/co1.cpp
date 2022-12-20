#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int i,j;
int main()
{
    int t;
    cin>>t;
    vector<int>v,v1;
    int y = -1;
    while(t--)
    {
        int n,x;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        int c=1;
        for(i=0; i<v.size(); i++)
        {
            if(v[i] - v[i+1] >2)
            {
                v1.push_back(c);
                c=1;
            }
            else c++;
        }

        sort(v1.begin(),v1.end());
        cout<<v1.front()<<" "<<v1.back()<<endl;
        v.clear();
        v1.clear();

    }
}
