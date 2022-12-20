#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}

int main()
{
    ll i,c=0;
    long double n,d;

        cin>>n>>d;
        for(i=n;i<=d;i++)
        {
            if(isPerfectSquare(i))
                c++;
        }

cout<<c;

}
