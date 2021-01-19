#include<stdio.h>
#define p printf
int main()
{
    int DDD;
    scanf("%d",&DDD);

    if(DDD==61)
        p("Brasilia\n");
    else if(DDD==71)
        p("Salvador\n");
    else if(DDD==11)
        p("Sao Paulo\n");
    else if(DDD==21)
        p("Rio de Janeiro\n");
    else if(DDD==32)
        p("Juiz de Fora\n");
    else if(DDD==19)
        p("Campinas\n");
    else if(DDD==27)
        p("Vitoria\n");
    else if(DDD==31)
        p("Belo Horizonte\n");
    else
        p("DDD nao cadastrado\n");

    return 0;
}
