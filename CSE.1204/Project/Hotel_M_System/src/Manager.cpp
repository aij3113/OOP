#include<bits/stdc++.h>
#include "Manager.h"
#include "Main_Register_Book.h"

using namespace std;

void R_Registration();
void Check_all();
void M_Pass_Change(char a[],char b[]);
void f_create(char a[],char b[]);
void menu2(){
    cout<<"\n\t\tWelcome Mr. Manager\n"<<endl;
    cout<<"1. Add New Receptionist\n2. Change Manager Password\n3. Show All\n4. Logout\n"<<endl;
}
void menu3(){
    cout<<"\n\t\tReceptionist's Page\n"<<endl;
    cout<<"1. Check In\n2. Check Out\n3. Show All\n4. Logout\n"<<endl;
}

Manager::Manager(){
}

void Manager::M_Login(){
    char fn[30],f_id[15],f_pass[20];
    cout<<"Enter Manager ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
    strcpy(fn,id);
    strcat(fn,".txt");
    ifstream obj1;
    obj1.open(fn);
    if(obj1){
        obj1>>f_id;
        obj1>>f_pass;
        if((strcmp(f_id,id)==0)&&(strcmp(M_id,id)==0)&&(strcmp(f_pass,pass)==0)){
            cout<<"\nLogin Successful...\n"<<endl;
            int x;
            menu2();
            cin>>x;
            while(1){
                    if(x==1){
                        R_Registration();
                        menu2();
                        cin>>x;
                    }
                    else if(x==2){
                        M_Pass_Change(id,pass);
                        menu2();
                        cin>>x;
                    }
                    else if(x==3){
                        Check_all();
                        menu2();
                        cin>>x;
                    }
                    else if(x==4){
                        cout<<"\nSigned Out\n"<<endl;
                        break;
                    }
                    else {
                        cout<<"\n\aInvalid Input\n"<<endl;
                        menu2();
                        cin>>x;
                    }
            }
        }
        else{
            cout<<"\n\aInvalid ID or Password...\n"<<endl;
        }
        obj1.close();
    }
    else{
        cout<<"\n\aAccount Not Found...\n"<<endl;
    }
}

void Manager::R_Login(){
    char fn[30],f_id[15],f_pass[20];
    cout<<"Enter Receptionist ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
    strcpy(fn,id);
    strcat(fn,".txt");
    ifstream obj1;
    obj1.open(fn);
    if(obj1){
        obj1>>f_id;
        obj1>>f_pass;
        if((strcmp(f_id,id)==0)&&(strcmp(f_pass,pass)==0)){
            cout<<"\nLogin Successful...\n"<<endl;
            menu3();
            Main_Register_Book obj1;
            int x;
            cin>>x;
            while(1){
                if(x==1){
                    obj1.Check_in();
                    menu3();
                    cin>>x;
                }
                else if(x==2){
                    obj1.Check_out();
                    menu3();
                    cin>>x;
                }
                else if(x==3){
                        Check_all();
                        menu3();
                        cin>>x;
                    }
                else if(x==4){
                    cout<<"Signing Out..."<<endl;
                    break;
                }
                else{
                    cout<<"\n\aInvalid Input\n"<<endl;
                    menu3();
                    cin>>x;
                }

            }
        }
        else{
            cout<<"\n\aInvalid ID or Password...\n"<<endl;
        }
        obj1.close();
    }
    else{
        cout<<"\n\aAccount Not Found...\n"<<endl;
    }
}

void R_Registration(){
    char id[15],pass[20];
    cout<<"Enter New Receptionist ID: ";
    cin>>id;
    cout<<"Enter New Password: ";
    cin>>pass;
    f_create(id,pass);
    cout<<"\nRegistration Successful...\n"<<endl;
}

void M_Pass_Change(char a[],char b[]){
    char id[15],pass[20],pass1[20],pass2[20];
    cout<<"\n\t\tPassword Change\n\nEnter ID: ";
    cin>>id;
    cout<<"Enter Password: ";
    cin>>pass;
    if((strcmp(a,id)==0)&&(strcmp(b,pass)==0)){
        cout<<"\nEnter New Password: ";
        cin>>pass1;
        cout<<"Confirm New Password: ";
        cin>>pass2;
        if((strcmp(pass1,pass2)==0)){
            f_create(id,pass1);
            cout<<"Password Changed"<<endl;
        }
        else
            cout<<"\n\aPassword Not Matched\n"<<endl;
    }
    else
        cout<<"\n\aWrong ID or Password\n"<<endl;
}

void Check_all(){
    char info[100];
    cout<<endl;

    ifstream obj1;
    obj1.open("Main_Register_Book.txt");
    if(obj1){
        while(!obj1.eof()){
            obj1>>info;
            cout<<"Date: "<<info<<endl;
            obj1>>info;
            cout<<"Time: "<<info<<endl;
            obj1>>info;
            cout<<"Room No: "<<info<<endl;
            obj1>>info;
            cout<<"Name: "<<info<<endl;
            obj1>>info;
            cout<<"Occupation: "<<info<<endl;
            obj1>>info;
            cout<<"NID No: "<<info<<endl;
            obj1>>info;
            cout<<"Age: "<<info<<endl;
            obj1>>info;
            cout<<"Days to Stay: "<<info<<endl;
            obj1>>info;
            cout<<"Address: "<<info<<endl;
            cout<<endl;
        }
        obj1.close();
    }
    else{
        cout<<"\n\aMain Register Book Not Found\n"<<endl;
    }
}

void f_create(char a[],char b[]){
    char fn[30];
    strcpy(fn,a);
    strcat(fn,".txt");
    ofstream obj1;
    obj1.open(fn);
    obj1<<a<<"\n"<<b<<endl;
    obj1.close();
}
