#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int X;
    if(N<1000){
        for(i=1;i<=N;i++){
            scanf("%d",&X);
        }
    }
    for(i=1;i<=N;i++){
        if(X==0) printf("NULL\n");

        else if(X>0){
            if(X%2==0) printf("EVEN POSITIVE\n");
            else printf("ODD POSITIVE\n");
        }
        else if(X<0){
            if(X%2==0) printf("EVEN NEGATIVE\n");
            else printf("ODD NEGATIVE\n");
        }

    }
    return 0;
}
