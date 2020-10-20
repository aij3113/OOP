#include <iostream>
#include "stack.h"
using namespace std;


void stack::push(int a)
{
    ax[i]=a;
    i=i+1;
    cout<<"\n"<<"Data :  ";
}
void stack::pop()
{
    if(i>0)
    {
        ax[i]=-1;
        i=i-1;
        cout<<"\n"<<"Popped Out Element"<<endl;
        if(i!=0)
           cout<<"\n"<<"Data :  ";
    }
    else
        cout<<"No Elements..."<<"\n"<<endl;
}
void stack::show()
{
    int j;

    for(j=i-1;j>=0;j--)
        cout<<ax[j]<<" ";
    cout<<endl;
}
