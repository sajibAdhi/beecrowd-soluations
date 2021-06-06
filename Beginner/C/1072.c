#include<stdio.h>
int main()
{
    int i,N,X[100],count=0;
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
    }

    for(i=0;i<N;i++){
        if(X[i]>=10&&X[i]<=20)
            count=count+1;
    }
    printf("%d in\n",count);
    printf("%d out\n",N-count);

    return 0;
}
