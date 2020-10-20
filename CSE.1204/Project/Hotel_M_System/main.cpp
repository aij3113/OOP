#include <bits/stdc++.h>
#include "Manager.h"
#include "Main_Register_Book.h"

using namespace std;

void menu1(){
    cout<<"\n\t\tWELCOME\n"<<endl;
    cout<<"1. Manager Login\n2. Receptionist Login\n3. Exit"<<endl;
}

int main(){
    int a;

    Manager obj;
    menu1();
    cin>>a;
    while(1){
        if(a==1){
            obj.M_Login();
            menu1();
            cin>>a;
        }
        else if(a==2){
            obj.R_Login();
            menu1();
            cin>>a;
        }
        else if(a==3){
            cout<<"\nExiting..."<<endl;
            break;
        }
        else{
            cout<<"\nWrong Input\n"<<endl;
            menu1();
            cin>>a;
        }
    }


    return 0;
}
