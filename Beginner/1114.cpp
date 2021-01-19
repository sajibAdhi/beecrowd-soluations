#include<iostream>
using namespace std;
int main (){
    char p[2002]="2002";
    char conp[2002];
    while(1){

       cin>>conp;
        if(strcmp(p,conp)==0){
 cout<<"Acesso Permitido\n";
  return 0;
        }
 else cout<<"Senha Invalida\n";

    }

    return 0;
}
