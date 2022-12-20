#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef pair<ll,ll> p;
typedef vector<ll> v;
typedef vector<p> vp;
typedef map<string,int>M;
typedef set<ll>S;

#define mp make_pair
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for(int i=0; i<n; i++)


int main() {

    string s;
    cin>>s;

    if(s.size() >= 3 && s.size() <= 100000) {

         if(s[s.size() - 2] == '0' && s[s.size() - 1] == '0') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '1') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '2') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '3') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '4') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '5') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '6') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '7') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '8') cout<<1;
    else if(s[s.size() - 2] == '0' && s[s.size() - 1] == '9') cout<<1;
    else if(s[s.size() - 2] == '1' && s[s.size() - 1] == '0') cout<<1;
    else if(s[s.size() - 2] == '1' && s[s.size() - 1] == '1') cout<<1;
    else if(s[s.size() - 2] == '1' && s[s.size() - 1] == '2') cout<<1;
    else if(s[s.size() - 2] == '1' && s[s.size() - 1] == '3') cout<<1;
    else if(s[s.size() - 2] == '1' && s[s.size() - 1] == '4') cout<<1;
    else if(s[s.size() - 2] == '1' && s[s.size() - 1] == '5') cout<<1;

    else cout<<0;
    }

    else {
        cout<<0;
    }
}

