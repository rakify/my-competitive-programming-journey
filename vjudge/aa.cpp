#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Sort(v)         sort(v.begin(),v.end())
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Fast
    ll t,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n),v1(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll c = 0, lp,fp;
        for(i=0; i<n; i++)
        {
            if(v[i]!=i+1)
            {
                fp = i;
                for(j=i+1; j<n; j++)
                {
                    if(v[j]==i+1)
                    {
                        lp = j+1;
//                        cout<<fp<<" "<<lp<<endl;
                        sort(v.begin()+fp,v.begin()+lp);
//                        for(k=0;k<n;k++)cout<<v[k]<<" ";
//cout<<endl;

                        c++;
                        break;
                    }
                }

            }
            if(c==2)break;
        }
        cout<<c<<endl;
    }


}
