#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
// CPP program to remove duplicate character
// from character array and print in sorted
// order
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll t,n,m,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s=to_string(n);
        sort(s.begin(),s.end());
        string s1;
        for(i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='0')continue;
            else if((s[i]-s[i-1])!=0)
                s1.push_back(s[i]);

        }


        for(i=0; i<s1.size(); i++)
        {

            if(n%(s1[i]-'0')!=0)
            {
               n++;
                s=to_string(n);
                sort(s.begin(),s.end(),greater<char>());
                s1="";
            for(i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='0')continue;
            else if((s[i]-s[i-1])!=0)
                s1.push_back(s[i]);
        }

            }
        }
        cout<<n<<endl;

    }


}
