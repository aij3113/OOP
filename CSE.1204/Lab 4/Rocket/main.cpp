#include <iostream>
#include "user.h"
#include<string.h>
//#include<fstream>

using namespace std;

void menu1(){
    cout<<"\tMAIN MENU"<<endl;
    cout<<"1.Registration\n2.Login\n0.Exit"<<endl;
}
void menu2(){
    cout<<"\tUSER MENU"<<endl;
    cout<<"1.Top up\n2.Withdraw\n3.Balance Check\n4.Log out"<<endl;
}
int main(){
    int a;

    menu1();
    cin>>a;
    while(a!=0){
        if(a==1){
            user A;
            A.reg();
            menu1();
            cin>>a;
        }
        else if(a==2){
            user B;
            B.login();


        }


    }

    return 0;
}
