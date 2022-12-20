#include <stdio.h>
int main()
{
    int ihour,imin,fhour,fmin;
    int itotal,ftotal,lastedH =0,lastedM = 0;
    scanf("%d %d %d %d",&ihour,&imin,&fhour,&fmin);
    itotal = (ihour*60)+imin;
    ftotal = (fhour*60)+fmin;

    if(ihour==fhour && imin==fmin)
        {
            lastedH = 24;
            lastedM = 0;
        }

    else
    {

    if(ftotal>itotal)
    {

            lastedH = (ftotal - itotal)/60;
            if((ftotal-itotal) > (lastedH*60))
            {
            lastedM = (ftotal - itotal) - (lastedH*60);
            }
            if ((lastedH*60)>(ftotal-itotal))
            {
                lastedM = (lastedH*60) - (ftotal - itotal);
            }
    }
    if(itotal>ftotal)
    {
        lastedH = (itotal - ftotal)/60;
            if((itotal-ftotal) > (lastedH*60))
            {
            lastedM = (itotal - ftotal) - (lastedH*60);
            }
            if ((lastedH*60)>(itotal-ftotal))
            {
                lastedM = (lastedH*60) - (itotal - ftotal);
            }
    }

    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",lastedH,lastedM);
}
