#include<stdio.h>
int main()
{
    int N,i,C=0,R=0,S=0,Total;
    scanf("%d",&N);

    char b;
    int a;
    double per;

    for(i=0;i<N;i++){
        scanf("%d %c",&a,&b);

        switch(b){
        case 'C':
            C=C+a;
            break;
        case 'R':
            R=R+a;
            break;
        case 'S':
            S=S+a;
            break;
        }
    }
    Total=C+R+S;
    printf("Total: %d cobaias\n",Total);

    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",C,R,S);

    per=C;
    per=(per*100)/Total;
    printf("Percentual de coelhos: %.2lf %%\n",per);

    per=R;
    per=(per*100)/Total;
    printf("Percentual de ratos: %.2lf %%\n",per);

    per=S;
    per=(per*100)/Total;
    printf("Percentual de sapos: %.2lf %%\n",per);
    return 0;
}
