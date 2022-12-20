#include<bits/stdc++.h>
using namespace std;
int main()
{
    double xi[]={0.3,1.3,2.3,3.3};
    for(int i=0;i<sizeof(xi)/sizeof(xi[0]);i++){
        cout<<((xi[i]+1-xi[i])/(xi[i]+1))*100<<endl;
    }

}
