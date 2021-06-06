#include<stdio.h>
int main()
{
    int startH,startM,endH,endM;
    scanf("%d %d %d %d",&startH,&startM,&endH,&endM);

    int startTime=(startH*60)+startM;
    int endTime=(endH*60)+endM;

    int time=endTime-startTime;
    int hour,minite;
    if(time>0){
        hour=(time/60);
        minite=(time%60);
    } else {
        time=(24*60)+time;
        hour=(time/60);
        minite=(time%60);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minite);
    return 0;
}
