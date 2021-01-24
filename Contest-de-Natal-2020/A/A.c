#include<stdio.h>
int main()
{
    int b, g = 0;
    scanf("%d %d", &b, &g);

    if(b > 1 && b < 1000 && g > 100 && g < 1000 && b < g){
            g = g/2;
        if(g == b){
            printf("Amelia tem todas bolinhas!\n");
        } else if(g > b){
            b = g - b;
            printf("Faltam %d bolinha(s)", b);
        }
    }
}
