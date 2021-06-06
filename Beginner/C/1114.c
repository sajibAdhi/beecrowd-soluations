#include<stdio.h>

int main()
{
    int rp=2002;
    int wp;
    int i;
    for(i=0;i<1;i++){
        scanf("%d",&wp);

        if(rp==wp){
            printf("Acesso Permitido\n");
        }
        else{
            printf("Senha Invalida\n");
            i--;
        }
    }
    return 0;
}
