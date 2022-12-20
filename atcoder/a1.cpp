#include<bits/stdc++.h>
    using namespace std;
    #include <boost/multiprecision/cpp_int.hpp>
    using namespace boost::multiprecision;
    #define int int128_t


    int32_t main(){

    	int x;
    	cin>>x;
    	int a = 100;
    	int t = 0;
    	while(a<x){
    		a = a*101;
    		a = a/100;
    		t++;
    	}
    	cout<<t;
    }
