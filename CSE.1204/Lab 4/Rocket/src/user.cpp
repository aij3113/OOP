#include <iostream>
#include "user.h"
#include<string.h>
#include<fstream>

using namespace std;

void user::reg(){
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
    cout<<"Enter Initial Amount to Deposit: ";
    cin>>balance;

    char fname[20];

    strcpy(fname,id);
    strcat(fname,".txt");

    ofstream obj1;

    obj1.open(fname);
    obj1<<id<<"\n"<<pass<<"\n"<<balance<<endl;
    obj1.close();
    cout<<"\nRegistration Successful...\n"<<endl;
}
void user::login(){
    char fname[20],f_id[20],f_pass[10];
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
    strcpy(fname,id);
    strcat(fname,".txt");

    ifstream obj2;
    obj2.open(fname);

    if(obj2){
        obj2>>f_id;
        obj2>>f_pass;

        if((strcmp(f_id,id)==0)&&(strcmp(f_pass,pass)==0))
        {
            cout<<"\nLogin Successful...\n"<<endl;
        }

        else
        {
            cout<<"\nInvalid ID or Password...\n"<<endl;
        }
        obj2.close();
    }

    else{
        cout<<"\nInvalid Account ID...\n"<<endl;
    }
}
