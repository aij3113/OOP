#include <bits/stdc++.h>
#include "Main_Register_Book.h"
using namespace std;

void Check_CI(char a[]);
void Check_CO(char a[]);
void Confirm(char a[],int b);
void menu4(){
    cout<<"\n\n\tSelect Room Type"<<endl;
    cout<<"1. Single\t1000TK\n2. Double\t1800TK\n3. Deluxe\t2500TK\n4. Back\n"<<endl;
}

Main_Register_Book::Main_Register_Book(){
}

void Main_Register_Book::set_all(){
    cout<<"Enter Name: "; cin>>name;
    cout<<"Enter Occupation: "; cin>>occupation;
    cout<<"Enter NID: "; cin>>nid;
    cout<<"Enter Address: ";  cin>>address;
    cout<<"Enter Age: ";  cin>>age;
    cout<<"Days to Stay Here: ";  cin>>days;
}

void Main_Register_Book::Check_in(){
    menu4();
    int x;
    cin>>x;
    while(1){
        if(x==1){
            Check_CI("Single");
             break;
        }
        else if(x==2){
            Check_CI("Double");
             break;
        }
        else if(x==3){
            Check_CI("Deluxe");
             break;
        }
        else if(x==4){
            break;
        }
        else{
            cout<<"\n\aWrong Input\n"<<endl;
            break;
        }
    }
}
void Main_Register_Book::Check_out(){
    menu4();
    int x;
    cin>>x;
    while(1){
        if(x==1){
            Check_CO("Single");
            break;
        }
        else if(x==2){
            Check_CO("Double");
             break;
        }
        else if(x==3){
            Check_CO("Deluxe");
             break;
        }
        else if(x==4){
            break;
        }
        else{
            cout<<"\a\nWrong Input\n"<<endl;
            break;
        }
    }
}

void Check_CI(char a[]){
    char ax[15];
    strcpy(ax,a);
    strcat(ax,".txt");
    int b[5];
    ifstream obj1;
    obj1.open(ax);
    if(obj1){
        for(int i=0;i<5;i++){
            obj1>>b[i];
        }
        obj1.close();

        int x=0,y;
            for(int i=0;i<5;i++){
                if(b[i]==0){
                    x++;
                }
            }
        if(x!=0){
            cout<<"\nAvailable Rooms:  ";
            for(int i=0;i<5;i++){
                if(b[i]==0){
                    cout<<a<<"-"<<1+i<<"    ";
                }
            }
            cout<<"\nConfirm Room: ";
            cin>>y;
            if(b[y-1]==0){
                b[y-1]=1;
                ofstream obj1;
                obj1.open(ax);
                if(obj1){
                    for(int i=0;i<5;i++){
                        obj1<<b[i]<<endl;
                    }
                    obj1.close();
                }
                Confirm(a,y);
            }
            else
                cout<<"\n\aInvalid Room"<<endl;
        }
        else
            cout<<"\n\aNo Room Available"<<endl;
    }
    else{
        cout<<"\n\aFile Not Found...\nCreating File..."<<endl;
        ofstream obj2;
        obj2.open(ax);
        if(obj2){
            for(int i=0;i<5;i++){
                obj2<<0<<endl;
            }
            cout<<"File Created..."<<endl;
        }
        else
            cout<<"\n\aFailed to Create the File"<<endl;
    }
}

void Check_CO(char a[]){
    char ax[15];
    strcpy(ax,a);
    strcat(ax,".txt");
    int b[5];
    ifstream obj1;
    obj1.open(ax);
    if(obj1){
        for(int i=0;i<5;i++){
            obj1>>b[i];
        }
        obj1.close();
        int x,y;
        cout<<"\nEnter Room Number: "; cin>>x;
        if(b[x-1]==1){
            b[x-1]=0;
            ofstream obj2;
            obj2.open(ax);
            if(obj2){
                for(int i=0;i<5;i++){
                    obj2<<b[i]<<endl;
                }
                obj2.close();
                cout<<"\nCheck Out Confirmed..."<<endl;
            }
        }
        else
            cout<<"\n\aWrong Room Number\n"<<endl;
    }
    else
        cout<<"\n\aFile Not Opened\n"<<endl;

}

void Confirm(char a[],int b){
    time_t now;
    struct tm local;
    now=time(NULL);
    local=*localtime(&now);
    Main_Register_Book obj1;
    obj1.set_all();
    ofstream obj2;
    obj2.open("Main_Register_Book.txt",ios::app);
    if(obj2){
        obj2/*<<"Date: "*/<<"\n"<<local.tm_mday<<"-"<<local.tm_mon+1<<"-"<<local.tm_year+1900<<endl;
        obj2<<local.tm_hour<<":"<<local.tm_min<<endl;
        obj2/*<<"Room No: "*/<<a<<"-"<<b<<endl;
        obj2<<obj1.name<<endl;
        obj2<<obj1.occupation<<endl;
        obj2<<obj1.nid<<endl;
        obj2<<obj1.age<<endl;
        obj2<<obj1.days<<endl;
        obj2<<obj1.address;

        obj2.close();

        cout<<"\nRoom Confirmed\n"<<endl;
    }
    else{
        cout<<"\n\aRegister Book Not Found\n"<<endl;
    }
}
