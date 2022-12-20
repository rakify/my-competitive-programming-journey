#include <bits/stdc++.h>
#define long long LL
#define br printf("\n")
using namespace std;

int main ()
{
    int ih, im;
    cin>>ih>>im;
    int fh,fm;
    cin>>fh>>fm;
    if(ih==fh){
        if(im==fm){cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)";br;return 0;}
        if(im>fm){cout<<"O JOGO DUROU 23 HORA(S) E "<<(im*60-fm*60)/60<<" MINUTO(S)";br;return 0;}
        if(im<fm){cout<<"O JOGO DUROU 0 HORA(S) E "<<(fm*60-im*60)/60<<" MINUTO(S)";br;return 0;}
    }

    else if(ih>fh){
        if(im==fm){cout<<"O JOGO DUROU "<<24-(ih-fh)<<" HORA(S) E 0 MINUTO(S)";br;return 0;}
        if(im>fm){cout<<"O JOGO DUROU "<<1+ih-fh<<" HORA(S) E "<<60-(im-fm)<<" MINUTO(S)";br;return 0;}
        if(im<fm){cout<<"O JOGO DUROU "<<24-(ih-fh)<<" HORA(S) E "<<60-((ih*60+im)-(fh*60+fm))<<" MINUTO(S)";br;return 0;}
    }

    else
    {
        int x=(ih*60)+im;
        int y=(fh*60)+fm;
    cout<<"0 JOGO DUROU "<<abs(x-y)/60<<" HORA(S) E "<<abs(x-y)%60<<" MINUTO(S)";br;;
    }



    return 0;}
