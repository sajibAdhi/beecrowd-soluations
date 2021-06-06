#include<stdio.h>

int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    double tri,cir,tra,qua,ret;
    double const pi=3.14159;

    tri=(A*C)/2;
    cir=pi*C*C;
    tra=((A+B)/2)*C;
    qua=B*B;
    ret=A*B;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf\n",ret);
    return 0;
}
