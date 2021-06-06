#include<stdio.h>
int main()
{
    float num,total=0,med=0;
    int c=0;

    while(1){
        scanf("%f",&num);
        if(num>=0 && num<=10){
            c=c+1;
            total=total+num;
            if(c==2){
                med=total/2;
                printf("media = %.2lf\n",med);
            }
        }
        else
            printf("nota invalida\n");

    }
}
