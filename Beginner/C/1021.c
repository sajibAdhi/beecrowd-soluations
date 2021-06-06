#include<stdio.h>
int main()
{
    int i,j,b[6],d[6];
    float N;
    float a[6]={100.00,50.00,20.00,10.00,5.00,2.00};
    float c[6]={1,0.50,0.25,0.10,0.05,0.01};


    scanf("%f",&N);
    printf("NOTAS:\n");

    for(i=0;i<6;i++){
        b[i]=N/a[i];
        N=N-(b[i]*a[i]);
        printf("%d nota(s) de R$ %.2f\n",b[i],a[i]);
    }

    printf("MOEDAS:\n");

    for(j=0;j<6;j++){
        d[j]=N/c[j];
        N=N-(d[j]*c[j]);
        printf("%d moeda(s) de R$ %.2f\n",d[j],c[j]);
    }
    return 0;

}
