#include<stdio.h>
#define p printf
int main()
{
    double A,B,C,max;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(C>B){
        max=C;
        C=B;
        B=max;
    }
    if(B>A){
        max=B;
        B=A;
        A=max;
    }
    if(C>B){
        max=C;
        C=B;
        B=max;
    }

    double a=A*A, b=B*B, c=C*C;

    if(A>=B+C){
        p("NAO FORMA TRIANGULO\n");
    }
    else if(a>b+c){
        p("TRIANGULO OBTUSANGULO\n");
        if(A==B&&A==C)
            p("TRIANGULO EQUILATERO\n");
        else if(A==B || B==C || A==C)
            p("TRIANGULO ISOSCELES\n");
    }
    else if(a<b+c){
        p("TRIANGULO ACUTANGULO\n");
        if(A==B&&A==C)
            p("TRIANGULO EQUILATERO\n");
        else if(A==B || B==C || A==C){
            p("TRIANGULO ISOSCELES\n");
        }
    }
    else if(a==b+c){
        p("TRIANGULO RETANGULO\n");
    }
    return 0;
}
