#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    char dayStr[4];
    int sD;
    int sH, sM, sS;
    char cU[2];

    s("%s",dayStr);
    s("%d",&sD);
    s("%d %c %d %c %d", &sH, &cU[0], &sM, &cU[1], &sS);

    char dayEnd[4];
    int eD;
    int eH, eM, eS;
    char cD[2];

    s("%s",dayEnd);
    s("%d",&eD);
    s("%d %c %d %c %d", &eH, &cD[0], &eM, &cD[1], &eS);

    int dates = (eD - sD)*24*60*60;
    int sT  = (((sH*60)+sM)*60)+sS;
    int eT  = (((eH*60)+eM)*60)+eS;

    int tT = dates + eT - sT;

    int s = tT%60;
    tT = tT/60; p("%d\n",tT);

    int m = tT%60;
    tT = tT/60; p("%d\n",tT);

    int h = tT%24;
    tT = tT/24;p("%d\n",tT);
    int d = tT;

    p("%d dia(s)\n", d);
    p("%d hora(s)\n", h);
    p("%d minuto(s)\n", s);
    p("%d segundo(s)\n", s);
}
