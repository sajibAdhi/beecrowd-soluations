#include<stdio.h>
int main()
{
    int N,n,i;
    scanf("%d",&N);
    if(5<N<2000 && N%2==0){
        for(i=2;i<=N;i+=2){
            n=i*i;
            printf("%d^2 = %d\n",i,n);
        }
    }
    return 0;
}
