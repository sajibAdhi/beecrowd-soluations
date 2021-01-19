#include<iostream>
using namespace std;
int main(){
    int M,N,sum=0,i;
        while(1){
            cin>>M>>N;
            if(M==0||N==0)
                break;
            else if(M>N){
                for(i=N;i<=M;i++){
                    cout<<i<<" ";
                    sum=sum+i;
                }
                cout<<"Sum="<<sum<<endl;
            }
            else if(N>M){
                sum=0;
                for(i=M;i<=N;i++){
                    cout<<i<<" ";
                    sum=sum+i;
                }
                cout<<"Sum="<<sum<<endl;
            }
        }
}

