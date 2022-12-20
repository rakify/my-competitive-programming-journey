#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,s,sum,checkmate,maxval,i,j;
int main()
{
	cin>>t;
	while(t--){
		cin>>n>>s;
        vector<ll>a(n+1);
		sum=0,maxval=0,checkmate=0;
		for(i=1;i<=n;i++)cin>>a[i];
		for(j=1;j<=n;j++){
			sum=sum+a[j];
			if(a[j]>maxval){
				maxval=a[j];
				checkmate=j;
			}
			if(sum>s) break;
		}
		cout<<((j>n)?0:checkmate)<<endl;
	}
}
