#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        const map <string,int> spam,nospam;//here i declared 2 maps with string as key and int as value
        int n;
        cin>>n;

        while(n--)
        {
            string a;
            int x;
            cin>>a>>x;

            if(x==1)
            {
                spam[a]++;//spam is the map name a is the key. i am adding value with ++ that means spam[a]=spam[a]+1.
                nospam[a];//means when spam value is increasing nospam remains same as before. its important.
            }
            else
            {
                nospam[a]++;
                spam[a];
            }
        }

        int ans=0;

        //now in order to work with the values i am creating 2 map iterator. itr1 to work with spam and it2 to work with nospam
        map <string,int>::iterator itr1,itr2;

        for(itr1=spam.begin(),itr2=nospam.begin(); (itr1!=spam.end()||itr2!=nospam.end()); itr1++,itr2++)
            ans+=((*itr1).second > (*itr2).second)?(*itr1).second:(*itr2).second;

        cout<<ans<<endl;//vallagse
    }
}

