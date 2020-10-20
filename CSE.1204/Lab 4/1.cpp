#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void menu()
{
    cout<<"\tMENU\n1.Register\n2.Login\n0.Exit\n";
}
int main()
{
    int a;
    char id[12],pass[10],fname[20],f_id[12],f_pass[10];
    menu();
    cin>>a;
    while(a!=0)
    {
        if(a==1)
        {
            cout<<"Enter ID: ";
            cin>>id;
            cout<<"Enter Password: ";
            cin>>pass;
            strcpy(fname,id);
            strcat(fname,".txt");

            ofstream obj1;

            obj1.open(fname);
            obj1<<id<<"\n"<<pass<<endl;
            obj1.close();
            cout<<"\nRegistration Successful...\n"<<endl;
            menu();
            cin>>a;
        }

        else if(a==2)
        {
            cout<<"Enter ID: ";
            cin>>id;
            cout<<"Enter Password: ";
            cin>>pass;
            strcpy(fname,id);
            strcat(fname,".txt");

            ifstream obj2;
            obj2.open(fname);
            if(obj2)
            {
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
                menu();
                cin>>a;
            }
            else
            {
                cout<<"\nInvalid Account ID...\n"<<endl;
                menu();
                cin>>a;
            }
        }
    }


    return 0;
}
