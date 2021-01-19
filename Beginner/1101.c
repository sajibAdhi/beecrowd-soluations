#include<stdio.h>
int main(){
    int M,N,sum=0,i;
        while(1){
            scanf("%d %d",&M,&N);
            if(M==0||N==0)
                break;
            else if(M>N){
                for(i=N;i<=M;i++){
                    printf("%d ",i);
                    sum=sum+i;
                }
                printf("Sum=%d\n",sum);
            }
            else if(N>M){
                sum=0;
                for(i=M;i<=N;i++){
                    printf("%d ",i);
                    sum=sum+i;
                }
                printf("Sum=%d\n",sum);
            }
        }
}
