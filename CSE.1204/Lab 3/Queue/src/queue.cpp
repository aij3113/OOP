#include<iostream>
#include "queue.h"
using namespace std;

void queue::push(int a)
{
    ax[i]=a;
    i=i+1;
    cout<<"\n"<<"Data :  ";
}
void queue::pop()
{
    int j;
    if(i>1)
    {
        for(j=0;j<i-1;j++)
        {
            ax[j]=ax[j+1];
        }
        ax[i]=-1;
        i=i-1;
        cout<<"\n"<<"Popped Out Element"<<endl;
        if(i!=0)
           cout<<"\n"<<"Data :  ";
    }
    else if(i==1)
    {
        ax[0]=ax[i];
        ax[i]=-1;
        i=i-1;
        cout<<"\n"<<"Popped Out Element"<<endl;
        cout<<"No Elements..."<<"\n"<<endl;
    }
    else
        cout<<"\n"<<"No Elements..."<<"\n"<<endl;
}
void queue::show()
{
    int j;

    for(j=0;j<i;j++)
        cout<<ax[j]<<" ";
    cout<<endl;
}


