#include<bits/stdc++.h>
using namespace std;

#define b 2
#define c 3
#define d 4
#define e 5
#define f 6
#define g 7
#define h 8
#define i 9
#define j 10
#define k 11
#define l 12
#define m 13
#define n 14
#define o 15
#define p 16
#define q 17
#define r 18
#define s 19
#define t 20
#define u 21
#define v 22
#define w 23
#define x 24
#define y 25
#define z 26
int it;
int main()
{
    int num,key;
    cin>>num>>key;
    string str;
    cin>>str;
    sort(str.begin(),str.end());

    for(it=0;it<str.size();it++)
    {
        while(str[it]==str[it+1])str.erase(str.begin()+it);
        while((str[it+1]-str[it])==1)str.erase(str.begin()+it+1);
    }
    if(str.size()<key)cout<<-1;
    else
    {
    int sum=0;
    for(it=0;it<key;it++)
    {
        sum+=str[it];
    }
        printf("%d",sum-(key*96));
    }



}
