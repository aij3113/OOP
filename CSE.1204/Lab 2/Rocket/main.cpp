#include <iostream>
#include "user.h"
#include<string.h>

using namespace std;

int main()
{
    char id[20],pass[10];
    long int balance;

    cin>>id;
    cin>>pass;
    cin>>balance;

    user u1(id,pass,balance);
    u1.balance_inquiry();cout<<endl;
    u1.topup(2000);
    u1.balance_inquiry();cout<<endl;
    u1.withdraw(5000);
    u1.balance_inquiry();cout<<endl;
    u1.withdraw(10000);
    u1.balance_inquiry();cout<<endl;


    return 0;
}
