#include<iostream>
using namespace std;

int main(){
    int n1,n2,b,s,r,lcm,gcd;

    cin>>n1>>n2;

    if(n1>n2){
        b=n1;
        s=n2;
    }
    else if(n2>n1){
        b=n2;
        s=n1;
    }
    r=b%s;

    while(r!=0){
        b=s;
        s=r;
        r=b%s;
    }
    gcd=s;
    lcm=n1*n2/gcd;

    cout<<"GCD = "<<gcd<<endl;
    cout<<"LCM = "<<lcm<<endl;
}
