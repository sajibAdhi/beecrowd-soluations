#include<iostream>
using namespace std;
int main()
{
    int N,K,i;
    while(1){
        cin>>N>>K;
        int A[N],a=0;
        for(i=0;i<N;i++){
            cin>>A[i];
            if(A[i]<1) a=a+1;
        }
        if(a>=K) cout<<"YES\n";
        else{
            cout<<"NO\n";
            break;
        }
    }
}
