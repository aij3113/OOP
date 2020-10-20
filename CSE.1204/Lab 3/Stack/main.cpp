#include <iostream>
#include "stack.h"
using namespace std;

void menu()
{
    cout<<"\n\t\t"<<"MENU"<<"\n"<<endl;
    cout<<" 1. PUSH"<<"\n"<<" 2. POP";
    cout<<"\n"<<" 0. Exit"<<endl;
}
int main()
{
    stack o;
    int a,i,j,k;

    menu();
    cin>>i;
    while(i!=0)
    {
        if(i==1)
        {
            cin>>a;
            o.push(a);
            o.show();
            menu();
            cin>>i;
        }
        else if(i==2)
        {
            o.pop();
            o.show();
            menu();
            cin>>i;
        }
        else if(i==0)
            break;
        else
        {
            cout<<"Wrong Input"<<"\n"<<endl;
            menu();
            cin>>i;
        }
    }



    return 0;
}
